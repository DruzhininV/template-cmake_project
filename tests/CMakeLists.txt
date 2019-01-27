
add_executable(tests testmain.cpp)

target_sources(tests
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
    )

target_link_libraries(tests
    PRIVATE
        GTest::GTest
        GTest::Main
        GMock::GMock
        GMock::Main
        ${PROJECT_NAME}
    )

enable_testing()
add_test(NAME Tests COMMAND tests)