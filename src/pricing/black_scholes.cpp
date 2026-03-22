#include <cmath>
#include "quant/pricing/black_scholes.hpp"

namespace quant {

double norm_cdf(double x) {
    return 0.5 * std::erfc(-x / std::sqrt(2));
}

double black_scholes_call(
    double S,
    double K,
    double r,
    double sigma,
    double T
) {

    double d1 = (std::log(S/K) + (r + 0.5*sigma*sigma)*T)
                /(sigma*std::sqrt(T));

    double d2 = d1 - sigma*std::sqrt(T);

    return S*norm_cdf(d1)
        - K*std::exp(-r*T)*norm_cdf(d2);
}

}
