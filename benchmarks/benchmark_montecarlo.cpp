#include <chrono>
#include <iostream>
#include "quant/pricing/black_scholes.hpp"

int main() {

    auto start =
        std::chrono::high_resolution_clock::now();

    for(int i=0;i<1000000;i++){

        quant::black_scholes_call(
            100,100,0.05,0.2,1
        );

    }

    auto end =
        std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> diff = end-start;

    std::cout<<"Execution time: "
             <<diff.count()<<" s\n";
}