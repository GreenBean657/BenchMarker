#pragma once

template <typename T>
struct FMAComparisonArray {
    T m1;
    T m2;
    T a;
    T r;
};

template <typename T>
class BenchMarkUtility {
    public:
        explicit BenchMarkUtility(size_t arrSize);

        void benchmark();

        ~BenchMarkUtility();
    private:
        FMAComparisonArray<T> *p_fma_arr;
};

#include "benchmarker.tpp"