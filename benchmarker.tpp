#include <iostream>
#include "./GPUKernelManager/kernel.h"
#include "benchmarker.h"
#include "GPUKernelManager/kernel.h"
#include "GPUKernelManager/kernel.h"

template<typename T>
bool BenchMarkUtility<T>::tryFMAAlloc(const size_t& arrSize) {
    try {
        std::cout << "Trying to allocate " << ((sizeof(FMAComparisonArray<T>) * arrSize)/ static_cast<double>(1'000'000'000)) << " GB." << std::endl;
        p_fma_arr = new FMAComparisonArray<T>[arrSize];
    } catch (const std::bad_alloc&) {
        std::cerr << "Benchmarker was provided an allocation beyond CPU memory." << std::endl;
        std::cerr << "Tried to allocate " << ((sizeof(FMAComparisonArray<T>) * arrSize)/ static_cast<double>(1'000'000'000)) << " GB." << std::endl;
        throw std::bad_alloc();
    }
    return true;
}


template <typename T>
BenchMarkUtility<T>::BenchMarkUtility(const size_t& arrSize) {
    tryFMAAlloc(arrSize);
}

template <typename T>
void BenchMarkUtility<T>::benchmark() {
    GPUKernel::tryAlloc(24);
    std::cout << "Benchmarked!" << std::endl;
}

template <typename T>
BenchMarkUtility<T>::~BenchMarkUtility() {
    delete[] p_fma_arr;
}
