#include <iostream>

#include "benchmarker.h"

template <typename T>
BenchMarkUtility<T>::BenchMarkUtility(const size_t arrSize) {
    try {
        p_fma_arr = new FMAComparisonArray<T>[arrSize];
    } catch (const std::bad_alloc& exception) {
        std::cerr << "Benchmarker was provided an allocation beyond CPU memory.\nDetails:\n" << exception.what() << std::endl;
        throw std::bad_alloc();
    }
}

template <typename T>
void BenchMarkUtility<T>::benchmark() {
    std::cout << "Benchmarked!" << std::endl;
}

template <typename T>
BenchMarkUtility<T>::~BenchMarkUtility() {
    delete[] p_fma_arr;
}
