
add_executable(benchmarks "" )

target_sources(benchmarks
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/benchmark.cpp
    )

find_package(benchmark REQUIRED)

target_link_libraries(benchmarks
    PRIVATE
        ${PROJECT_NAME}
        benchmark::benchmark
        benchmark::benchmark_main
    )