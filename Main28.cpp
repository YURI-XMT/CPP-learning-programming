#include <iostream>

void PrintInt(const int x){
    std::cout << x << '\n'; // x = 10 False
}

int main(){
    PrintInt(5);
    PrintInt(10);
    return 0;
}