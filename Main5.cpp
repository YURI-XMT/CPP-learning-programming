#include <iostream>

int add(int x, int y);

int main() {
    std::cout << "Sum of 3 and 4 is " << add(3, 4) << "\n";
    return 0;
}

int add(int x, int y) {
    return x + y;
}