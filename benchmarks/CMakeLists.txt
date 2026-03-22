add_executable(benchmark_montecarlo
    benchmark_montecarlo.cpp
)

target_link_libraries(benchmark_montecarlo
    quant_engine
)