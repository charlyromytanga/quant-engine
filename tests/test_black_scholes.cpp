#include <gtest/gtest.h>
#include "quant/pricing/black_scholes.hpp"

TEST(BlackScholes, CallPrice) {

    double price = quant::black_scholes_call(
        100,100,0.05,0.2,1
    );

    EXPECT_NEAR(price, 10.45, 0.5);
}