cmake_minimum_required(VERSION 3.15)

#--------------------------------------------
# Include AMBI gettext-helpers
# Gettext (libintl.h) - см. HAVE_LIBINTL_H option is 'ON'
#--------------------------------------------
if(HAVE_LIBINTL_H)
    find_package(Intl
    #    REQUIRED
    )
    if(Intl_FOUND)
        find_package(Gettext REQUIRED)
        include(${CMAKE_DIR}/AMBI-gettext.cmake)
    endif()
endif()

#--------------------------------------------
# Ensures that we do an out of source build
#--------------------------------------------
MACRO(ASSERT_OUT_OF_SOURCE_BUILD MSG)
    STRING(COMPARE EQUAL "${CMAKE_SOURCE_DIR}" "${CMAKE_BINARY_DIR}" insource)
    GET_FILENAME_COMPONENT(PARENTDIR ${CMAKE_SOURCE_DIR} PATH)
    STRING(COMPARE EQUAL "${CMAKE_SOURCE_DIR}" "${PARENTDIR}" insourcesubdir)
    IF(insource OR insourcesubdir)
        MESSAGE(FATAL_ERROR "${MSG}")
    ENDIF(insource OR insourcesubdir)
ENDMACRO(ASSERT_OUT_OF_SOURCE_BUILD)

#--------------------------------------------
# Expand files list '_LIST' by GLOB of '_MASK' argument
#--------------------------------------------
MACRO(GLOB_LIST _LIST _MASK)
    if(${_LIST})
        foreach(INC ${${_LIST}})
            if(${INC} STREQUAL ${_MASK})
                list(FIND ${_LIST} ${_MASK} INDEX)
                list(REMOVE_AT ${_LIST} ${INDEX})
                list(GET ${_LIST} ${INDEX} _ITEM)
                if(_ITEM)
                    get_filename_component(source_dir ${_ITEM} DIRECTORY)
                    get_filename_component(source_mask ${_ITEM} NAME)
                    if(IS_DIRECTORY ${source_dir})
                        file(GLOB source_list ${source_dir}/${source_mask})
                        list(REMOVE_AT ${_LIST} ${INDEX})
                        foreach(file ${source_list})
                            list(FIND ${_LIST} ${file} idx)
                            if(idx EQUAL -1)
                                list(APPEND ${_LIST} ${file})
                            endif()
                        endforeach()
                    else()
                        MESSAGE(FATAL_ERROR "- ${source_dir} is not a directory")
                    endif()
                else()
                    MESSAGE(FATAL_ERROR "- file mask are not specified")
                endif()
            endif()
        endforeach()
    endif()
ENDMACRO(GLOB_LIST)

#--------------------------------------------
# function add_target
#--------------------------------------------
function(add_target TAG_NAME)
    set(options EXE LIB)
    set(oneValueArgs TYPE)
    set(multiValueArgs SRCS PRPS OPTS DEFS INCS LNKS)
    cmake_parse_arguments(TAG "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})

    if (TAG_LIB)
        add_library(${TAG_NAME} ${TAG_TYPE} ${TAG_SRCS})
    elseif (TAG_EXE)
        add_executable(${TAG_NAME} ${TAG_SRCS})
    else()
        MESSAGE(FATAL_ERROR "Unknown module type")
    endif()

    if (TAG_PRPS)
        set_target_properties      (${TAG_NAME} PROPERTIES ${TAG_PRPS})
    endif()

    if (TAG_OPTS)
        target_compile_options     (${TAG_NAME} PRIVATE ${TAG_OPTS})
    endif()

    if (TAG_DEFS)
        target_compile_definitions (${TAG_NAME} PRIVATE ${TAG_DEFS})
    endif()

    if (TAG_INCS)
        target_include_directories (${TAG_NAME} PRIVATE ${TAG_INCS})
    endif()

    if(TAG_LNKS)
        target_link_libraries(${TAG_NAME} ${TAG_LNKS})
    endif()

endfunction()

#--------------------------------------------
# Функция компиляции модулей
#--------------------------------------------
function(add_module MOD_NAME)
    set(options INSTALL EXE LIB MOD DLL INF)
    set(oneValueArgs VERS SOVERS)
    set(multiValueArgs SRCS PRPS OPTS DEFS INCS LNKS LNGS HDRS DEST)
    cmake_parse_arguments(MOD "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})
    set(all_keywords ${options} ${oneValueArgs} ${multiValueArgs})

    if(MOD_INF)
        message("=i= Built target ${CMAKE_PROJECT_NAME} - ${PROJECT_NAME} module. Version ${PROJECT_VERSION} ===")
        message("- AMBI source dir   = ${CMAKE_SOURCE_DIR}")
        message("- AMBI binary dir   = ${CMAKE_BINARY_DIR}")
        message("- Module source dir = ${CMAKE_CURRENT_SOURCE_DIR}")
        message("- Module binary dir = ${CMAKE_CURRENT_BINARY_DIR}")
    endif()

    #Check the name of module
    if (MOD_NAME)
        set(OUT_NAME ${MOD_NAME})
        list(FIND MOD_PRPS "OUTPUT_NAME" index)
        if(NOT index EQUAL -1)
            math(EXPR index ${index}+1)
            list(GET MOD_PRPS "${index}" OUT_NAME)
        endif()
        list(FIND all_keywords ${MOD_NAME} KEY_NAME)
        if (NOT KEY_NAME EQUAL -1)
            set(MOD_NAME ${OUT_NAME})
            list(FIND all_keywords ${MOD_NAME} KEY_NAME)
            if (NOT KEY_NAME EQUAL -1)
                MESSAGE(FATAL_ERROR "The module name is not specified or is equal to the keyword (${MOD_NAME}).\n\t"
                    "You must specify a unique module name")
            endif()
        endif()
    else()
        MESSAGE(FATAL_ERROR "Module name must be specified")
    endif()

    # Set version properties
    if (MOD_VERS)
        set (MOD_PRPS ${MOD_PRPS} VERSION ${MOD_VERS})
    endif()
    if (MOD_SOVERS)
        set (MOD_PRPS ${MOD_PRPS} SOVERSION ${MOD_SOVERS})
    endif()

    # Add some properties
    foreach(INC ${AMBI_PRPS_SETS})
        list(FIND MOD_PRPS ":${INC}" INDEX)
        if(NOT INDEX EQUAL -1)
            list(REMOVE_AT MOD_PRPS ${INDEX})
            list(INSERT MOD_PRPS INDEX ${AMBI_PRPS_${INC}})
        endif()
    endforeach()

    # Add some options
    foreach(INC ${AMBI_OPTS_SETS})
        list(FIND MOD_OPTS ":${INC}" INDEX)
        if(NOT INDEX EQUAL -1)
            list(REMOVE_AT MOD_OPTS ${INDEX})
            list(INSERT MOD_OPTS INDEX ${AMBI_OPTS_${INC}})
        endif()
    endforeach()

    # Add some definitions
    foreach(INC ${AMBI_DEFS_SETS})
        list(FIND MOD_DEFS ":${INC}" INDEX)
        if(NOT INDEX EQUAL -1)
            list(REMOVE_AT MOD_DEFS ${INDEX})
            list(INSERT MOD_DEFS INDEX ${AMBI_DEFS_${INC}})
        endif()
    endforeach()

    # Add some includes
    foreach(INC ${AMBI_INCS_SETS})
        list(FIND MOD_INCS ":${INC}" INDEX)
        if(NOT INDEX EQUAL -1)
            list(REMOVE_AT MOD_INCS ${INDEX})
            list(INSERT MOD_INCS INDEX ${AMBI_INCS_${INC}})
        endif()
    endforeach()

    # Unmask (expand) files lists
    GLOB_LIST(MOD_INCS ":MASK")
    GLOB_LIST(MOD_SRCS ":MASK")
    GLOB_LIST(MOD_HDRS ":MASK")

    # Add includes from PROJECT_INC_DIR + [sources paths] to MOD_INCS
    set (MOD_DIRSET ${AMBI_INC_DIR})
    foreach(INC ${MOD_SRCS})
        get_filename_component(source_dir ${INC} DIRECTORY)
        if(IS_DIRECTORY ${source_dir})
            list(FIND MOD_DIRSET ${source_dir} INDEX)
            if(INDEX EQUAL -1)
                set (MOD_DIRSET ${MOD_DIRSET} ${source_dir})
                if (NOT MOD_POTD)
                    set(MOD_POTD ${source_dir})
                endif()
            endif()
        else()
            MESSAGE(FATAL_ERROR "- ${source_dir} is not a directory")
        endif()
    endforeach()
    set(MOD_INCS ${MOD_INCS} ${MOD_DIRSET})

    # Configure Gettext
    if(Intl_FOUND AND MOD_LNGS)
        if (NOT MOD_POTD)
            list(GET MOD_DIRSET 0 MOD_POTD)
        endif()
        string(APPEND MOD_POTD "/po")
        string(FIND ${OUT_NAME} "_" IND REVERSE)
        math(EXPR IND ${IND}+1)
        string(SUBSTRING ${OUT_NAME} ${IND} -1 SUBNAME)
        set(POTD_DOMAIN ${SUBNAME})
        string(FIND ${AMBI_POT_PRX} ${SUBNAME} index)
        if(index EQUAL -1)
            set(POTD_DOMAIN ${AMBI_POT_PRX}${POTD_DOMAIN})
        endif()

        # Call configure gettext helper
        configure_gettext(
                DOMAIN ${POTD_DOMAIN}
                TARGET_NAME ${MOD_NAME}-gettext
                SOURCES ${MOD_SRCS}
                POTFILE_DESTINATION ${MOD_POTD}
                POFILE_DESTINATION ${MOD_POTD}
                GMOFILE_DESTINATION ${MOD_POTD}
                XGETTEXT_ARGS
                    --c++ --no-location
                    --keyword=_ #--keyword=N_ "--keyword=P_:1,2"
                    --package-name=${PROJECT_NAME}
                    --package-version=${PROJECT_VERSION}
                    --copyright-holder=AMBITECS
                    --msgid-bugs-address=REPORT@AMBI.BIZ
                LANGUAGES ${MOD_LNGS}
                INSTALL_DESTINATION ${localedir_full}
        )
    endif()

    # Call common helper function
    if (MOD_LIB)
        add_target(${MOD_NAME} LIB TYPE STATIC
            SRCS ${MOD_SRCS} PRPS ${MOD_PRPS} OPTS ${MOD_OPTS} DEFS ${MOD_DEFS} INCS ${MOD_INCS} LNKS ${MOD_LNKS})
    elseif (MOD_DLL)
        add_target(${MOD_NAME} LIB TYPE SHARED
            SRCS ${MOD_SRCS} PRPS ${MOD_PRPS} OPTS ${MOD_OPTS} DEFS ${MOD_DEFS} INCS ${MOD_INCS} LNKS ${MOD_LNKS})
    elseif (MOD_MOD)
        add_target(${MOD_NAME} LIB TYPE MODULE
            SRCS ${MOD_SRCS} PRPS ${MOD_PRPS} OPTS ${MOD_OPTS} DEFS ${MOD_DEFS} INCS ${MOD_INCS} LNKS ${MOD_LNKS})
    elseif (MOD_EXE)
        add_target(${MOD_NAME} EXE
            SRCS ${MOD_SRCS} PRPS ${MOD_PRPS} OPTS ${MOD_OPTS} DEFS ${MOD_DEFS} INCS ${MOD_INCS} LNKS ${MOD_LNKS})
    endif()

    # Public headers
    if (MOD_HDRS)
        set_property(TARGET ${MOD_NAME} PROPERTY PUBLIC_HEADER ${MOD_HDRS})
    endif()

    # Gettext linking
    if(Intl_FOUND AND MOD_LNGS)
        add_dependencies(${MOD_NAME} ${MOD_NAME}-gettext)
        target_link_libraries(${MOD_NAME} ${Intl_LIBRARIES})
        target_include_directories(${MOD_NAME} PRIVATE ${Intl_INCLUDE_DIRS})
    endif()

    # Install module
    if(${MOD_INSTALL})
        set(DEST_ARGS)
        if (MOD_DEST)
            set(DEST_ARGS DESTINATION ${MOD_DEST})
        else()
            set(libs_dest ${atom_libdir_full})
            if(MOD_MOD)
                set(libs_dest ${atom_moddir_full})
            endif()
            set(DEST_ARGS
                LIBRARY DESTINATION         ${libs_dest}
                RUNTIME DESTINATION         ${atom_bindir_full}
                PUBLIC_HEADER DESTINATION   ${atom_incdir_full}
            )
        endif()
        install(TARGETS ${MOD_NAME} ${DEST_ARGS})
    endif()
endfunction()

#--------------------------------------------
# function add_sql_data
#--------------------------------------------
function(add_sql_data SRCS_DIR)
    set(options)
    set(oneValueArgs DEST)
    set(multiValueArgs)
    cmake_parse_arguments(MOD "${options}" "${oneValueArgs}" "${multiValueArgs}" ${ARGN})
    find_package(SQLite3 REQUIRED)
    string(REPLACE "/" "-" TAG_PREFIX ${SRCS_DIR})
    string(REPLACE "\\" "-" TAG_PREFIX ${TAG_PREFIX})
    set(_OUTPUT_DIR "${DB_OUTPUT_PATH}/${SRCS_DIR}")
    if(MOD_DEST)
        set(_INSTALL_DIR "${atom_datadir_full}/${MOD_DEST}")
    else()
        set(_INSTALL_DIR "${atom_datadir_full}/${SRCS_DIR}")
    endif()
    file(GLOB SQL_SOURCES ${ATOM_DAT_DIR}/${SRCS_DIR}/*.sql)
    if(NOT EXISTS "${_OUTPUT_DIR}")
        file(MAKE_DIRECTORY "${_OUTPUT_DIR}")
    endif()
    foreach(file IN LISTS SQL_SOURCES)
        get_filename_component(file_name ${file} NAME_WLE)
        set(_OUTPUT_FILE "${_OUTPUT_DIR}/${file_name}.db")
        add_custom_command(
                OUTPUT ${_OUTPUT_FILE}
                COMMAND "/usr/bin/cmake"
                -D "PRE_CMD=sqlite3"
                -D "PRE_ARG=${_OUTPUT_FILE}"
                -D "OUTPUT_FILE=${_OUTPUT_FILE}"
                -D "INPUT_FILE=${file}"
                -P "${CMAKE_DIR}/ATOM-preproc.cmake"
                DEPENDS "${file}"
                COMMENT "Creating the ${file_name}.db file from the .sql file"
        )
        add_custom_target(${TAG_PREFIX}-${file_name}-db ALL DEPENDS ${_OUTPUT_FILE})
        # not necessary to use build event here, if we mark the output file as generated
        set_source_files_properties(${_OUTPUT_FILE} PROPERTIES GENERATED 1)
        install(FILES "${_OUTPUT_FILE}" DESTINATION "${_INSTALL_DIR}" )
    endforeach()
endfunction()

#--------------------------------------------
