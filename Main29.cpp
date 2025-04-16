#include <iostream>

int getNumber(){
    std::cout << "Enter a number: ";
    int y{};
    std::cin >> y;
    return y;
}

int main(){
    const int x{3};
    const int y{getNumber()};
    const int z{x + y};
    return 0;
}