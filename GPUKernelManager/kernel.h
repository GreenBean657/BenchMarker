#pragma once

#include <cstddef>

namespace GPUKernel {
    void* tryAlloc(std::size_t arrBytes);
}