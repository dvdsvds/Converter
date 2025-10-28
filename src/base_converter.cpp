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

    std::vector<std::pair<std::vector<bool>::iterator, std::vector<bool>::iterator>> octal_converter(std::vector<bool>& binary) {
        int pad = (3 - (binary.size() % 3)) % 3;
        binary.insert(binary.begin(), pad, 0);
        std::vector<std::pair<std::vector<bool>::iterator, std::vector<bool>::iterator>> octal;

        for(int i = binary.size(); i > 0; i -= 3) {
            auto end = binary.begin() + i;
            auto start = (i >= 3) ? end - 3 : binary.begin();
            octal.push_back({start, end});
        }

        for(int i = 0; i < octal.size(); i++) {
            for(auto it = octal[i].first; it != octal[i].second; ++it) {
                
            }
        }
        std::reverse(octal.begin(), octal.end());

        return octal;
    }
}