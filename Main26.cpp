#include <iostream>

void print(int x){
    std::cout << x;
}

int main(){
    char ch{97};
    std::cout << static_cast<int>(ch) << '\n';
    std::cout << ch << '\n';
    return 0;
}