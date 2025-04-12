#include <iostream>

int GetValueFromUser() {
    std::cout << " Enter a Number ";
    int input{};
    std::cin >> input;
    return input;
}

int main() {
    int num{ GetValueFromUser() };
    std::cout << num << " Double is " << num * 2 << "\n";
    return 0;
}