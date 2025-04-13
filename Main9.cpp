#include <iostream>

#define PRINT_JOE

int main() {
    #ifdef PRINT_JOE
    std::cout << "HI JOE\n";
    #endif

    #ifdef PRINT_BOB
    std::cout << "HI BOB\n";
    #endif

    #ifndef PRINT_BOB
    std::cout << "HI JOE\n";
    #endif

    return 0;
}