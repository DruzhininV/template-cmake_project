//
// Created by Vladimir Druzhinin on 27.01.2019.
//
#include <benchmark/benchmark.h>
#include <shape.h>


static void BM_StringCreation(benchmark::State& state) {
    for(auto _ : state)
        std::string empty_string;
}
BENCHMARK(BM_StringCreation);


static void BM_CreationSphere(benchmark::State& state) {
    for(auto _ : state)
        auto const sphere = lib::make_sphere();
}
BENCHMARK(BM_CreationSphere);
