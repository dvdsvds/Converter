#include "base_converter.hpp"

namespace Converter {
    std::vector<bool> binary_converter(int num) {
        int remain;
        std::vector<bool> result;

        while(num > 1) {
            remain = num % BINARY_BIT;
            num /= BINARY_BIT;
            result.push_back(remain);
        }

        result.push_back(num);

        if(result.size() < BIT) result.insert(result.end(), BIT - result.size(), 0);

        std::reverse(result.begin(), result.end()); 

        return result;
    }

    std::vector<int> octal_converter(int num) {
        std::vector<bool> binary = binary_converter(num);
        std::vector<int> octal;

    }
}