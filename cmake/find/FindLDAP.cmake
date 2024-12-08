include(${CMAKE_DIR}/AMBI-libfind.cmake)
find_mod(LDAP
        #NAMES *
        #PATHS /usr/lib/*
        INAMES ldap.h
        IPATHS /usr/include/*
        )
