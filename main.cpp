#include <iostream>

#include "benchmarker.h"
#include "./GPUKernelManager/kernel.h"
int main() {
    BenchMarkUtility<double> benchmarker(50000000000);
    benchmarker.benchmark();
}