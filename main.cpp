#include <iostream>
#include "benchmarker.h"
#include "./GPUKernelManager/kernel.h"
int main() {
    BenchMarkUtility<double> benchmarker(500'647'001);
    benchmarker.benchmark();
}