#include <iostream>

void print(int x){
    std::cout << x;
}

int main(){
    print(static_cast<int>(5.5));
    return 0;
}