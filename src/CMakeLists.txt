
add_library(${PROJECT_NAME} "")
add_subdirectory(include)

target_sources(${PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/sphere.h
        ${CMAKE_CURRENT_LIST_DIR}/sphere.cpp
    )

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
