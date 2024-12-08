include(${CMAKE_DIR}/AMBI-libfind.cmake)
find_mod(MySQL
        INAMES mysql.h
        IPATHS /usr/include/*
        )
