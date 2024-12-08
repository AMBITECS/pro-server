cmake_minimum_required(VERSION 3.19)
project( OPENPLC
         VERSION 1.0.1
         DESCRIPTION "OPENPLC - PLC for ever"
         LANGUAGES C CXX
)
set( PROJECT_SO_VERSION          "1"  )
set( CMAKE_CXX_STANDARD          11   )
set( CMAKE_CXX_STANDARD_REQUIRED True )

set( AMBI ${CMAKE_PROJECT_NAME} )     # AMBI = project name in orig case
string( TOLOWER ${AMBI} ambi )        # ambi = project name in lowercase

# Set Production path = CMAKE_INSTALL_PREFIX =>
if(CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
    set(
            CMAKE_INSTALL_PREFIX "$ENV{HOME}/.local"                # Set Project install directory
            CACHE PATH "Default install directory"
            FORCE
    )
endif()
SET( prefix                         "${CMAKE_INSTALL_PREFIX}"       ) # Project install path-prefix

# Main INSTALL specific PVs
SET( bindir_full                    "${prefix}/bin"                 ) # Binaries location
SET( libdir_full                    "${prefix}/lib"                 ) # Libraries location
SET( incdir_full                    "${prefix}/include"             ) # Include files
SET( datadir_full                   "${prefix}/share"               ) # Data location
SET( localedir_full                 "${prefix}/share/locale"        ) # I18N locales
SET( sysconfdir_full                "${prefix}/etc"                 ) # Configure location

# AMBI INSTALL specific PVs
SET( ambi_bindir_full               "${bindir_full}"                ) # AMBI Binaries location for configurations
SET( ambi_libdir_full               "${libdir_full}"                ) # AMBI libraries location for configurations
SET( ambi_moddir_full               "${libdir_full}/${ambi}"        ) # AMBI modules location for configurations
SET( ambi_incdir_full               "${incdir_full}/${ambi}"        ) # AMBI Include files location for configurations
SET( ambi_datdir_full               "${datdir_full}/${ambi}"        ) # AMBI data location for configurations

# AMBI Project specific PVs
set( AMBI_DIR                       ${CMAKE_SOURCE_DIR}             ) # AMBI project directory
set( AMBI_SRC_DIR                   ${AMBI_DIR}                     ) # AMBI sources directory
set( AMBI_INC_DIR                   ${AMBI_DIR}/lib                 ) # AMBI includes directory
set( AMBI_MOD_DIR                   ${AMBI_DIR}/moduls              ) # AMBI modules directory
set( AMBI_DAT_DIR                   ${AMBI_DIR}/data                ) # AMBI data files directory
set( AMBI_UP1_DIR                   ${AMBI_DIR}/..                  ) # AMBI 1-level up directory
set( AMBI_UP2_DIR                   ${AMBI_DIR}/../..               ) # AMBI 2-level up directory

set( AMBI_IEC2C                     ${AMBI_UP1_DIR}/iec2c           ) # IEC to C compiler
set( AMBI_ST_FILE                   ${AMBI_UP1_DIR}/st_files/wmt.st ) # ST source file

set( AMBI_POT_PRX                   "openplc_"                      ) # target pot-files prefix
set( AMBI_MOD_PRX                   "mod_"                          ) # target module filename prefix
set( AMBI_LIB_PRX                   "lib"                           ) # target static library filename prefix
set( AMBI_DLL_PRX                   "lib"                           ) # target dynamic library filename prefix

# CMAKE module specific directories
set( CMAKE_DIR                      ${AMBI_DIR}/cmake               ) # CMAKE modules directory
set( CMAKE_FND_DIR                  ${CMAKE_DIR}/find               ) # CMAKE cmake find-modules directory
set( CMAKE_PREFIX_PATH              ${CMAKE_DIR}                    )
set( CMAKE_MODULE_PATH              ${CMAKE_DIR}
                                    ${CMAKE_FND_DIR}                )
# CMAKE library prefixes
set( CMAKE_SHARED_MODULE_PREFIX     ${AMBI_MOD_PRX}                 ) # CMAKE_SHARED_MODULE_PREFIX (default "lib")
set( CMAKE_STATIC_LIBRARY_PREFIX    ${AMBI_LIB_PRX}                 ) # CMAKE_STATIC_LIBRARY_PREFIX (default "lib")
set( CMAKE_SHARED_LIBRARY_PREFIX    ${AMBI_DLL_PRX}                 ) # CMAKE_SHARED_LIBRARY_PREFIX (default "lib")

# CMAKE binary outputs options directories
set( ARCHIVE_OUTPUT_PATH            ${CMAKE_BINARY_DIR}/output/arc  )
set( EXECUTABLE_OUTPUT_PATH         ${CMAKE_BINARY_DIR}/output/bin  )
set( LIBRARY_OUTPUT_PATH            ${CMAKE_BINARY_DIR}/output/lib  )
set( DB_OUTPUT_PATH                 ${CMAKE_BINARY_DIR}/output/db   )
set( CMAKE_INCLUDE_CURRENT_DIR ON)

# CMAKE target files permissions
set( PERM_FILE  OWNER_WRITE OWNER_READ
                GROUP_READ
                WORLD_READ
)
set( PERM_EXEC  OWNER_EXECUTE OWNER_WRITE OWNER_READ
                GROUP_EXECUTE GROUP_READ
                WORLD_EXECUTE WORLD_READ
)

#-------------------------------------------------------------------------------
# AMBI target modules options sets
#-------------------------------------------------------------------------------
set(AMBI_OPTS_SETS STD)
set(AMBI_OPTS_STD -g -O2 -fPIC)             # Standard compiler options

# AMBI target modules definitions sets
set(AMBI_DEFS_SETS STD QT)
set(AMBI_DEFS_STD                           # Standard defs set
        HAVE_CONFIG_H
        PIC
        )
set(AMBI_DEFS_QT                            # QT defs set
        QT_GUI_LIB
        QT_CORE_LIB
        QT_PRINTSUPPORT_LIB
        QT_WIDGETS_LIB
        )

# AMBI target modules properties sets
set(AMBI_PRPS_SETS QTGEN)
set(AMBI_PRPS_QTGEN                         # Qt generation properties
        AUTOMOC ON
        AUTORCC ON
        AUTOUIC ON
        )

#-------------------------------------------------------------------------------
# Include project helpers & options
#-------------------------------------------------------------------------------
include(${CMAKE_DIR}/AMBI-options.cmake)
include(${CMAKE_DIR}/AMBI-helpers.cmake)

#-------------------------------------------------------------------------------
# Assert "out of source build"
#-------------------------------------------------------------------------------
ASSERT_OUT_OF_SOURCE_BUILD("${AMBI_NAME} requires an out of source build.")

#-------------------------------------------------------------------------------
# Используемые стандартные библиотеки
#-------------------------------------------------------------------------------
#find_package(AsioPAL REQUIRED)
#find_package(AsioDNP3 REQUIRED)
#find_package(OpenPAL REQUIRED)
#find_package(OpenDNP3 REQUIRED)

#SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpermissive") # errors to warnings conversion

#-------------------------------------------------------------------------------
# 1) Компиляция C-шных файлов, полученные компиляцией iec2c
#-------------------------------------------------------------------------------
# Компиляция *.st файла в *.c *.h
add_custom_command(
    OUTPUT  ${AMBI_SRC_DIR}/Config0.c ${AMBI_SRC_DIR}/Res0.c
    DEPENDS ${AMBI_ST_FILE}
    WORKING_DIRECTORY ${AMBI_UP1_DIR}
    COMMENT "Compiling the ST file into 'C' ..."
    COMMAND "${AMBI_IEC2C}" -f -l -p -r -R -a "${AMBI_ST_FILE}"
    COMMAND mv -f VARIABLES.csv *.h *.c ./core/
)

# Эти цели "устаревают" ВСЕГДА, поэтому их сборка всегда занимает время
#add_custom_target(Config0 g++ -o ${AMBI_SRC_DIR}/Config0.o -I ${AMBI_INC_DIR} -c ${AMBI_SRC_DIR}/Config0.c -w)
#add_custom_target(Res0 g++ -o ${AMBI_SRC_DIR}/Res0.o -I ${AMBI_INC_DIR} -c ${AMBI_SRC_DIR}/Res0.c -w)

# Применение add_custom_command позволяет внедрить зависимости (здесь - на уровне файлов)
add_custom_command(
    OUTPUT
        ${AMBI_SRC_DIR}/Config0.o
        ${AMBI_SRC_DIR}/Res0.o
    DEPENDS
        ${AMBI_SRC_DIR}/Config0.c
        ${AMBI_SRC_DIR}/Res0.c
    COMMAND g++ -o ${AMBI_SRC_DIR}/Config0.o -I ${AMBI_INC_DIR} -c ${AMBI_SRC_DIR}/Config0.c -w
    COMMAND g++ -o ${AMBI_SRC_DIR}/Res0.o    -I ${AMBI_INC_DIR} -c ${AMBI_SRC_DIR}/Res0.c    -w
)

#-------------------------------------------------------------------------------
# 2) Главный исполняемый модуль ${ambi} = 'openplc'
#-------------------------------------------------------------------------------
add_module(${ambi}
    INSTALL EXE
    OPTS -g -O0 -w #-Wno-varargs -Wno-parentheses -Wno-parentheses-equality
    INCS ${AMBI_SRC_DIR}
    INCS ${AMBI_INC_DIR}
    INCS "/usr/local/include/modbus"
    #DEFS HAVE_CONFIG_H
    SRCS
        :MASK ${AMBI_SRC_DIR}/*.cpp
        #:MASK ${AMBI_SRC_DIR}/*.o
        # Распаковано ниже для разрешения зависимостей:
        ${AMBI_SRC_DIR}/Config0.o
        ${AMBI_SRC_DIR}/Res0.o
    LNKS
        pthread modbus
        ${AsioPAL_LIBRARIES}  #asiopal
        ${AsioDNP3_LIBRARIES} #asiodnp3
        ${OpenPAL_LIBRARIES}  #openpal
        ${OpenDNP3_LIBRARIES} #opendnp3
)
#add_dependencies(${ambi} Config0 Res0)

#-------------------------------------------------------------------------------
# 3) Склеивание PVs перед компиляцией и сборкой ${ambi} = 'openplc' (PRE_BUILD)
#-------------------------------------------------------------------------------
add_custom_command(TARGET ${ambi} WORKING_DIRECTORY ${AMBI_SRC_DIR}
        COMMAND PRE_BUILD ./glue_generator > ${AMBI_SRC_DIR}/glue_generator.out
        COMMENT "Glue generator for PVs: glue_generator > glue_generator.out"
)

#-------------------------------------------------------------------------------