find_package(GTest REQUIRED)

add_executable(test_black_scholes
    test_black_scholes.cpp
)

target_link_libraries(test_black_scholes
    quant_engine
    GTest::GTest
    GTest::Main
)

enable_testing()

add_test(NAME BlackScholesTest
         COMMAND test_black_scholes)