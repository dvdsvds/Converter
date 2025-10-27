#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

#define BIT 32
#define BINARY_BIT 2
#define OCTAL_BIT 8

namespace Converter {
    std::vector<bool> binary_converter(int num);
    std::vector<int> octal_converter(int num);
}