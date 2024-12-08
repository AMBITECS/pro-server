# preprocess command
# parameters INPUT_FILE and OUTPUT_FILE denote the file to use as source
# and the file to write the results to respectively
# use ${PRE_CMD} ${PRE_ARG} value to get data to write to the output file
execute_process(COMMAND "${PRE_CMD}" "${PRE_ARG}"
        INPUT_FILE  "${INPUT_FILE}"
        RESULT_VARIABLE _EXIT_CODE
        OUTPUT_FILE "${OUTPUT_FILE}"
        )
if (_EXIT_CODE)
    message(FATAL_ERROR "An error occured when preprocessing the file ${INPUT_FILE}")
endif()
