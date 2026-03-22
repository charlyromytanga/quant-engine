#pragma once

namespace quant {

double black_scholes_call(
    double S,
    double K,
    double r,
    double sigma,
    double T
);

}