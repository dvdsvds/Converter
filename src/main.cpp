#include "base_converter.hpp"

int main() {
    int val;
    std::vector<bool> binary; 

    std::cout << ">";
    std::cin >> val;

    binary = Converter::binary_converter(val);

    int binary_size = 0;
    for(int b : binary) {
        std::cout << b;
        binary_size++;
        if(binary_size % 8 == 0) std::cout << " ";
    }
    std::cout << "(2)" << std::endl;

    auto octal = Converter::octal_converter(binary);

    int i = 0;
    auto range = octal[i];

    std::cout << "Group " << i << ": ";
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << *it;
    }

    std::cout << std::endl;

    for(int i = 0; i < octal.size(); i++) {
        for(auto it = octal[i].first; it != octal[i].second; ++it) {
            std::cout << *it;
        }
    }

    std::cout << "(8)" << std::endl;

    return 0;
}