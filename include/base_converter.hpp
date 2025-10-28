#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

#define BIT 32
#define BINARY_BIT 2

namespace Converter {
    std::vector<bool> binary_converter(int num);
    std::vector<std::pair<std::vector<bool>::iterator, std::vector<bool>::iterator>> octal_converter(std::vector<bool>& binary);
}