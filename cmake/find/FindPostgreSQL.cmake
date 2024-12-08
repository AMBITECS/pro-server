include(${CMAKE_DIR}/AMBI-libfind.cmake)
find_mod(PostgreSQL
        INAMES libpq-fe.h
        IPATHS /usr/include/*
        )
