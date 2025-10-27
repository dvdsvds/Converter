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

    std::vector<int> octal = Converter::octal_converter(binary);

    int octal_size = 0;
    for(int o : octal) {
        std::cout << o;
        octal_size++;
        if(octal_size % 8 == 0) std::cout << " ";
    }

    std::cout << "(8)" << std::endl;


    return 0;
}