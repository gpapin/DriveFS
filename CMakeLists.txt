cmake_minimum_required(VERSION 3.9)
project(DriveFS CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS -std=c++17)


add_executable(DriveFS
        # semaphore
        external/semaphore/common/autoresetevent.h
        external/semaphore/common/sema.h

        #easylogging
        external/easyloggingpp/src/easylogging++.cc
        external/easyloggingpp/src/easylogging++.h
#        /usr/include/easylogging++.cc
#        /usr/include/easylogging++.h

        # my files
        src/main.cpp
        src/BaseFile.cpp
        ./include/BaseFile.h
        src/gdrive/File.cpp
        ./include/gdrive/File.h
        src/gdrive/Filesystem.cpp
        ./include/gdrive/Filesystem.h
        src/gdrive/Account.cpp
        ./include/gdrive/Account.h
        src/BaseAccount.cpp
        ./include/BaseAccount.h
        external/adaptive_time_parser/adaptive_time_parser.cpp
        src/gdrive/Filesystem.cpp
        ./include/gdrive/Filesystem.h
        src/BaseFileSystem.cpp
        ./include/BaseFileSystem.h
        src/FolderIO.cpp
        ./include/FolderIO.h src/gdrive/FileIO.cpp
        ./include/gdrive/FileIO.h
        ./include/DownloadBuffer.h

        src/DownloadBuffer.cpp)

target_compile_definitions(${PROJECT_NAME}
        PUBLIC
        _FILE_OFFSET_BITS=64
        )

#lib fuse3
find_package(PkgConfig REQUIRED)

if(USE_FUSE3)
    pkg_search_module(LIBFUSE REQUIRED fuse3)
    target_compile_definitions(${PROJECT_NAME} PUBLIC USE_FUSE3
            FUSE_USE_VERSION=31)

else()
    pkg_search_module(LIBFUSE REQUIRED fuse)
    target_compile_definitions(${PROJECT_NAME} PUBLIC
            FUSE_USE_VERSION=29)
endif()

#add search for libbson
find_package(PkgConfig REQUIRED)
#pkg_search_module(LIBBSON REQUIRED libbson-1.0)
target_include_directories(${PROJECT_NAME} PUBLIC
        ./external/include/mongocxx/v_noabi/
        ./external/include/bsoncxx/v_noabi/
        ./include
        ./external/include
        ./external
        ./external/adaptive_time_parser
        ./external/semaphore/common
        ./external/easyloggingpp/src
        ${LIBFUSE_INCLUDE_DIRS}
        )

#set(CMAKE_MODULE_PATH /usr/local/include/mongocxx/v_noabi/mongocxx/cmake)
#find_package(mongocxx REQUIRED)



SET(Boost_USE_MULTITHREAD ON)
find_package(PkgConfig REQUIRED)
find_package(Boost 1.66.0 COMPONENTS thread system program_options filesystem REQUIRED)

#find_package(OpenSSL 1.0 EXACT REQUIRED )
find_package(OpenSSL EXACT REQUIRED )

include(./cmake/libcpprestsdk.cmake)
include(./cmake/libmongocxx.cmake)
MESSAGE("OPENSSL LIBRRAIES are :    ${OPENSSL_SSL_LIBBRARY} ${OPENSSL_CRYPTO_LIBBRARY}")
MESSAGE("${OPENSSL_SSL_LIBBRARY}")
MESSAGE("${OPENSSL_CRYPTO_LIBBRARY}")
find_library(TCMALLOC_LIB NAMES tcmalloc tcmalloc-minimal libtcmalloc.so.4 libtcmalloc_minimal.so.4 HINTS /usr/lib /usr/lib/x86_64-linux-gnu)
find_library(JEMALLOC_LIB NAMES jemalloc libjemalloc.so.1 HINTS /usr/lib /usr/lib/x86_64-linux-gnu)
add_dependencies(${PROJECT_NAME} cpprest mongocxx)
target_link_libraries(${PROJECT_NAME}
        ${LIBFUSE_LIBRARIES}
        pthread
        ${OPENSSL_SSL_LIBRARY}
        ${OPENSSL_CRYPTO_LIBRARY}
        ${Boost_LIBRARIES}
        ${CPPREST_LIB}
        ${MONGOCXX_LIB}
#        ${TCMALLOC_LIB}
        ${JEMALLOC_LIB}
        )

target_compile_definitions(${PROJECT_NAME}
      PUBLIC
        ELPP_THREAD_SAFE
        ELPP_FEATURE_CRASH_LOG
        )

