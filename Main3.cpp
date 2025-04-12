#include <iostream>

int GetValueFromUser() {
    std::cout << "Enter a Number ";
    int input{};
    std::cin >> input;
    return input;
}

void PrintDouble(int num) {
    std::cout << num << " Double is " << num * 2 << "\n";
}

int main() {
    int num{ GetValueFromUser() };
    PrintDouble(num);
    return 0;
}