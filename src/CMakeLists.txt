
add_library(${PROJECT_NAME} "")
add_subdirectory(include)

target_sources(${PROJECT_NAME}
    PRIVATE
        sphere.h
        sphere.cpp
    PUBLIC
#        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include/shape.h>
#        $<INSTALL_INTERFACE:include/shape.h>
    )

#source_group("Implementation" FILES sphere.cpp)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
    
    )

target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
        $<INSTALL_INTERFACE:include>
    )

target_compile_features(${PROJECT_NAME}
    PRIVATE
        cxx_std_17
    )

set_target_properties(${PROJECT_NAME}
    PROPERTIES
        DEBUG_POSTFIX "-d"
    )

if ( CMAKE_CXX_COMPILER_ID MATCHES "Clang|AppleClang|GNU" )
    target_compile_options(${PROJECT_NAME}
        PRIVATE
            -Wall
            -Wextra
            -Wunreachable-code
            -Wpedantic
        )
endif()
if ( CMAKE_CXX_COMPILER_ID MATCHES "Clang" )
    target_compile_options(${PROJECT_NAME}
        PRIVATE
            -Wweak-vtables
            -Wexit-time-destructors
            -Wglobal-constructors
            -Wmissing-noreturn
        )
    
endif()
if ( CMAKE_CXX_COMPILER_ID MATCHES "MSVC" )
    target_compile_options(${PROJECT_NAME}
        PRIVATE
            /W4
            /w44265
            /w44061
            /w44062
        )
endif()