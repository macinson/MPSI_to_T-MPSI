//
// Created by jelle on 14-10-20.
//

#ifndef BENCHMARKING_H
#define BENCHMARKING_H

#include <vector>

void benchmark(std::vector<long> parties_t, std::vector<long> set_size_exponents);
void threshold_benchmark(std::vector<long> parties_t, std::vector<long> set_size_exponents);
void ot_mpsi_benchmarkm1(std::vector<long> parties_t, std::vector<long> set_size_exponents);
void ot_mpsi_benchmark2(std::vector<long> parties_t, std::vector<long> set_size_exponents);

#endif //BENCHMARKING_H
