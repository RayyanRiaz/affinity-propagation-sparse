#pragma once
#include <vector>

std::vector<int> affinityPropagation(
    FILE* input,
    float prefType = 1,
    double damping = 0.9,
    int maxit = 1000,
    int convit = 50,
    bool debug = false
);
