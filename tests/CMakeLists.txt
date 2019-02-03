
add_executable(tests shapetest.cpp)

target_sources(tests
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}
    )

find_package(GTest REQUIRED)
find_package(GMock REQUIRED)

target_link_libraries(tests
    PRIVATE
        ${PROJECT_NAME}
        GTest::GTest
        GTest::Main
        GMock::GMock
        GMock::Main
    )

enable_testing()
#add_test(NAME Tests COMMAND tests)
add_test(NAME Tests COMMAND $<TARGET_FILE:tests>)
