#include "kernel.h"
#include <cuda_runtime.h>

namespace GPUKernel {
    void* tryAlloc(std::size_t arrBytes) {
        void* ptr = nullptr;
        cudaMalloc(&ptr, arrBytes);
        return ptr;
    }
}