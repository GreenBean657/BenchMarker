#pragma once

// In benchmarker.h
struct FMAComparisonArrayBase {
    virtual ~FMAComparisonArrayBase() = default;
};

template <typename T>
struct FMAComparisonArray final : FMAComparisonArrayBase {
    T m1, m2, a, r;
};

template <typename T>
class BenchMarkUtility {
    public:
        explicit BenchMarkUtility(const size_t& arrSize);

        void benchmark();

        ~BenchMarkUtility();
    private:
        bool tryFMAAlloc(const size_t &arrSize);
        FMAComparisonArray<T> *p_fma_arr;
};

#include "benchmarker.tpp"