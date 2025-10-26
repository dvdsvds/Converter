#include "base_converter.hpp"

int main() {
    int val;
    std::vector<bool> binary; 

    std::cout << ">";
    std::cin >> val;

    binary = Converter::binary_converter(val);

    for(int b : binary) {
        std::cout << b;
    }

    std::cout << std::endl;
    return 0;
}