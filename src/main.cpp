#include "base_converter.hpp"

int main() {
    int a;
    std::vector<bool> binary; 

    std::cout << ">";
    std::cin >> a;

    binary = Converter::binary_converter(a);

    for(int b : binary) {
        std::cout << b;
    }

    std::cout << std::endl;
    return 0;
}