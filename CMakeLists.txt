cmake_minimum_required(VERSION 3.13)
project(template_cmake_project LANGUAGES CXX VERSION 0.0.1.0)

# Download automatically, you can also just copy the conan.cmake file
if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
    message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
    file(DOWNLOAD "https://github.com/conan-io/cmake-conan/raw/v0.13/conan.cmake"
        "${CMAKE_BINARY_DIR}/conan.cmake")
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)
conan_check(VERSION 1.0.0 REQUIRED)
conan_add_remote(NAME bincrafters
    URL https://api.bintray.com/conan/bincrafters/public-conan
    )

conan_cmake_run(CONANFILE conanfile.txt
    BASIC_SETUP CMAKE_TARGETS
    BUILD missing
    )

find_package(GTest REQUIRED)
find_package(GMock REQUIRED)


add_subdirectory(src)
add_subdirectory(tests)
