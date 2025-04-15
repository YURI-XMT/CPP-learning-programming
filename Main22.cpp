#include <iostream>

int main() {
    std::cout << "Input a key character: ";
    char ch{};
    std::cin >> ch;
    std::cout << "You entered " << ch << "\n";
    return 0;
}