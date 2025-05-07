#include<iostream>

int factorial(const int base_number) {
    if (base_number == 0 || base_number == 1) return 1;
    return base_number * factorial(base_number-1);
}

signed main(int argc, char **argv) {
    std::string temp;
    std::getline(std::cin, temp);

    const auto base_number = std::stoi(temp);
    std::cout << factorial(base_number) << std::endl;
    return 0;
}


