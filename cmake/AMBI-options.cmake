# === OPTIONS block
OPTION( CoreLibNmToDlOpen "Force core library name to it open by dlopen() for included/builtin modules" OFF)
OPTION( CLOSEDIR_VOID "=ON: if the `closedir' function returns void instead of `int'" OFF )
OPTION( HAVE_FFTW3_H "=ON: if you have the <fftw3.h> header file" OFF )
OPTION( HAVE_GD_FORCE "=ON: LibGD: Force the library using into the core and modules" OFF )
OPTION( HAVE_MYSQL "=ON: if MySQL libraries are available" OFF )
OPTION( HAVE_NDIR_H "=ON: if you have the <ndir.h> header file, and it defines `DIR'" OFF )
OPTION( HAVE_PHONON "The Phonon media player engine is allowed" OFF )
OPTION( HAVE_PHONON_VIDEOPLAYER "=ON: if you have the <phonon/VideoPlayer> header file" OFF )
OPTION( HAVE_WEBKIT "The WebKit web browser engine is allowed" OFF )
OPTION( HAVE__BOOL "=ON: if the system has the type `_Bool'" OFF )
OPTION( STDC_HEADERS "=ON: if you have the ANSI C header files" OFF ) ###
OPTION( HAVE_QTSENSORS "QtSensors for mobility devices is allowed" OFF )
OPTION( HAVE_STAT_EMPTY_STRING_BUG "=ON: if `stat' has the bug that it succeeds when given the zero-length file name argument" OFF )
OPTION( HAVE_SYS_DIR_H "=ON: if you have the <sys/dir.h> header file, and it defines `DIR'." OFF )
OPTION( HAVE_SYS_NDIR_H "=ON: if you have the <sys/ndir.h> header file, and it defines `DIR'." OFF )
OPTION( TM_IN_SYS_TIME "=ON: if your <sys/time.h> declares `struct tm'" OFF )
OPTION( HAVE_STDBOOL_H "=ON: if stdbool.h conforms to C99" OFF )
OPTION( HAVE_IODBC "=ON: if iODBC libraries are available" OFF )
OPTION( HAVE_LDAP_H "=ON: if you have the <ldap   .h> header file" OFF )

OPTION( HAVE_ALARM "=ON: if you have the `alarm' function" ON )
OPTION( HAVE_CRYPT_H "=ON: if you have the <crypt.h> header file" ON )
OPTION( HAVE_CTYPE_H "=ON: if you have the <ctype.h> header file" ON )
OPTION( HAVE_DEQUE "=ON: if you have the <deque> header file" ON )
OPTION( HAVE_ERRNO_H "=ON: if you have the <errno.h> header file" ON )
OPTION( HAVE_EXCEPTION "=ON: if you have the <exception> header file" ON )
OPTION( HAVE_GD_H "=ON: if you have the <gd.h> header file" ON )
OPTION( HAVE_ICONV_H "=ON: if you have the <iconv.h> header file" ON )
OPTION( HAVE_LANGINFO_H "=ON: if you have the <langinfo.h> header file" ON )
OPTION( HAVE_LIBINTL_H "=ON: if you have the <libintl.h> header file" ON )
OPTION( HAVE_LIBPORTAUDIO "=ON: if you have the `portaudio' library (-lportaudio)" ON )
OPTION( HAVE_LIBSQLITE3 "=ON: if you have the `sqlite3' library (-lsqlite3)" ON )
OPTION( HAVE_LIBSSL "=ON: if you have the `ssl' library (-lssl)" ON )
OPTION( HAVE_LINUX_CAN_H "=ON: if you have the <linux/can.h> header file" ON )
OPTION( HAVE_LINUX_I2C_DEV_H "=ON: if you have the <linux/i2c-dev.h> header file" ON )
OPTION( HAVE_LINUX_KD_H "=ON: if you have the <linux/kd.h> header file" ON )
OPTION( HAVE_LINUX_SERIAL_H "=ON: if you have the <linux/serial.h> header file" ON )
OPTION( HAVE_LINUX_SPI_SPIDEV_H "=ON: if you have the <linux/spi/spidev.h> header file" ON )
OPTION( HAVE_MALLOC "=ON: if your system has a GNU libc compatible `malloc' function, and to 0 otherwise" ON )
OPTION( HAVE_MAP "=ON: if you have the <map> header file" ON )
OPTION( HAVE_MATH_H "=ON: if you have the <math.h> header file" ON )
OPTION( HAVE_NET_SNMP_NET_SNMP_CONFIG_H "=ON: if you have the <net-snmp/net-snmp-config.h> header file" ON )
OPTION( HAVE_OPENSSL_BIO_H "=ON: if you have the <openssl/bio.h> header file" ON )
OPTION( HAVE_OPENSSL_ERR_H "=ON: if you have the <openssl/err.h> header file" ON )
OPTION( HAVE_OPENSSL_MD5_H "=ON: if you have the <openssl/md5.h> header file" ON )
OPTION( HAVE_OPENSSL_SSL_H "=ON: if you have the <openssl/ssl.h> header file" ON )
OPTION( HAVE_PCRE_H "=ON: if you have the <pcre.h> header file" ON )
OPTION( HAVE_PORTAUDIO_H "=ON: if you have the <portaudio.h> header file" ON )
OPTION( HAVE_POSTGRESQL "=ON: if PostgreSQL libraries are available" ON ) ###
OPTION( HAVE_PTHREAD "Define if you have POSIX threads libraries and header files" ON )
OPTION( HAVE_PTHREAD_PRIO_INHERIT "Have PTHREAD_PRIO_INHERIT" ON )
OPTION( HAVE_REALLOC "=ON: if your system has a GNU libc compatible `realloc' function, and to 0 otherwise" ON )
OPTION( HAVE_SIGNAL_H "=ON: if you have the <signal.h> header file" ON )
OPTION( HAVE_STDARG_H "=ON: if you have the <stdarg.h> header file" ON )
OPTION( HAVE_STDIO_H "=ON: if you have the <stdio.h> header file" ON )
OPTION( HAVE_STRING_H "=ON: if you have the <string.h> header file" ON )
OPTION( HAVE_SYSCALL_H "=ON: if you have the <syscall.h> header file" ON )
OPTION( HAVE_TYPEINFO "=ON: if you have the <typeinfo> header file" ON )
OPTION( HAVE_VECTOR "=ON: if you have the <vector> header file" ON )
OPTION( LSTAT_FOLLOWS_SLASHED_SYMLINK "=ON: if `lstat' dereferences a symlink specified with a trailing slash" ON )
OPTION( HAVE_TIME_H "=ON: if you have the <time.h> header file" ON )

# Options used in SMTP module
OPTION( HAVE_ARPA_INET_H "=ON: if you have the <arpa/inet.h> header file" ON )
OPTION( HAVE_DIRENT_H "=ON: if you have the <dirent.h> header file" ON )
OPTION( HAVE_DLFCN_H "=ON: if you have the <dlfcn.h> header file" ON )
OPTION( HAVE_FCNTL_H "=ON: if you have the <fcntl.h> header file" ON )
OPTION( HAVE_INTTYPES_H "=ON: if you have the <inttypes.h> header file" ON )
OPTION( HAVE_LIBCRYPTO "=ON: if you have the `crypto' library (-lcrypto)" ON )
OPTION( HAVE_LOCALE_H "=ON: if you have the <locale.h> header file" ON )
OPTION( HAVE_MEMORY_H "=ON: if you have the <memory.h> header file" ON )
OPTION( HAVE_NETDB_H "=ON: if you have the <netdb.h> header file" ON )
OPTION( HAVE_NETINET_IN_H "=ON: if you have the <netinet/in.h> header file" ON )
OPTION( HAVE_PTHREAD_H "=ON: if you have the <pthread.h> header file" ON )
OPTION( HAVE_SENSORS_SENSORS_H "=ON: if you have the <sensors/sensors.h> header file" ON )
OPTION( HAVE_STDINT_H "=ON: if you have the <stdint.h> header file" ON )
OPTION( HAVE_STDLIB_H "=ON: if you have the <stdlib.h> header file" ON )
OPTION( HAVE_STRING "=ON: if you have the <string> header file" ON )
OPTION( HAVE_STRINGS_H "=ON: if you have the <strings.h> header file" ON )
OPTION( HAVE_SYS_SELECT_H "=ON: if you have the <sys/select.h> header file" ON )
OPTION( HAVE_SYS_SOCKET_H "=ON: if you have the <sys/socket.h> header file" ON )
OPTION( HAVE_SYS_STAT_H "=ON: if you have the <sys/stat.h> header file" ON )
OPTION( HAVE_SYS_TIME_H "=ON: if you have the <sys/time.h> header file" ON )
OPTION( HAVE_SYS_TYPES_H "=ON: if you have the <sys/types.h> header file" ON )
OPTION( HAVE_SYS_UN_H "=ON: if you have the <sys/un.h> header file" ON )
OPTION( HAVE_SYS_UTSNAME_H "=ON: if you have the <sys/utsname.h> header file" ON )
OPTION( HAVE_SYS_WAIT_H "=ON: if you have <sys/wait.h> that is POSIX.1 compatible" ON )
OPTION( HAVE_UNISTD_H "=ON: if you have the <unistd.h> header file" ON )
OPTION( TIME_WITH_SYS_TIME "=ON: if you can safely include both <sys/time.h> and <time.h>" ON )

# === OPTION -> SET if any
OPTION( PTHREAD_CREATE_JOINABLE "" OFF )    # "Define to necessary symbol if this constant uses a non-standard name on your system"
OPTION( malloc "" OFF )                     # "Define to rpl_malloc if the replacement function should be used"
OPTION( off_t "" OFF )                      # "Define to `long int' if <sys/types.h> does not define"
OPTION( pid_t "" OFF )                      # "Define to `int' if <sys/types.h> does not define"
OPTION( realloc "" OFF )                    # "Define to rpl_realloc if the replacement function should be used"
OPTION( size_t "" OFF )                     # "Define to `unsigned int' if <sys/types.h> does not define"
OPTION( const "" OFF )                      # "Define to empty if `const' does not conform to ANSI C"
OPTION( LT_OBJDIR "\".libs\"" OFF)          # "Define to the sub-directory for uninstalled libraries"

# === SET options block
SET( NAME    ${ATOM} )                              # "Project name"
SET( VERSION ${CMAKE_PROJECT_VERSION} )             # "Version number of package"

SET( PACKAGE "${atom}" )                            # "Name of package"
SET( PACKAGE_NAME "${NAME}" )                       # "Define to the full name of this package"
SET( PACKAGE_TARNAME "${PACKAGE}")                  # "Define to the one symbol short name of this package"
SET( PACKAGE_URL "atom-nn.ru/${PACKAGE}" )          # "Define to the home page for this package"
SET( PACKAGE_BUGREPORT "admin@${PACKAGE_URL}" )     # "Define to the address where bug reports for this package should be sent"
SET( PACKAGE_STRING "${NAME} ${VERSION}" )          # "Define to the full name and version of this package"
SET( PACKAGE_VERSION "${VERSION}")                  # "Define to the version of this package"
SET( MODS_INCL " "  )                                # "Modules list of included/builtin to the core"

SET( RETSIGTYPE "void" )                            # "Define as the return type of signal handlers (`int' or `void')"
SET( SELECT_TYPE_ARG1 "int" )                       # "Define to the type of arg 1 for `select'"
SET( SELECT_TYPE_ARG234 "(fd_set *)" )              # "Define to the type of args 2, 3 and 4 for `select'"
SET( SELECT_TYPE_ARG5 "(struct timeval *)" )        # "Define to the type of arg 5 for `select'"

SET( prefix            "${CMAKE_INSTALL_PREFIX}" )  # "Project install location"
SET( bindir_full       "${prefix}/bin" )            # "Binaries location"
SET( libdir_full       "${prefix}/lib" )            # "Libraries location"
SET( incdir_full       "${prefix}/include" )        # "Include files"
SET( datadir_full      "${prefix}/share" )          # "Data location"
SET( localedir_full    "${prefix}/share/locale" )   # "I18N locales"
SET( sysconfdir_full   "${prefix}/etc" )            # "Configure location"

SET( atom_bindir_full  "${bindir_full}" )           # "ATOM Binaries location for configurations"
SET( atom_libdir_full  "${libdir_full}" )           # "ATOM libraries location for configurations"
SET( atom_moddir_full  "${libdir_full}/${atom}" )   # "ATOM modules location for configurations"
SET( atom_incdir_full  "${incdir_full}/${atom}" )   # "ATOM Include files location for configurations"
SET( atom_datadir_full "${datadir_full}/${atom}" )  # "ATOM data location for configurations"

OPTION(BUILD_SHARED_LIBS "=ON: if your want to create SHARED libs as shared" ON)

