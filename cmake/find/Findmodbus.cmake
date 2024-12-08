include(${CMAKE_DIR}/AMBI-libfind.cmake)
find_mod(modbus
        INAMES modbus.h
        IPATHS /usr/local/include/*
        )
