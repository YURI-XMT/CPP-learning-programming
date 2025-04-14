#include <iostream>
using namespace std;

bool areEqual(int x, int y) {
    return x == y;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    bool result = areEqual(num1, num2);
    cout << boolalpha;
    cout << "Are the two numbers equal? " << result << endl;

    return 0;
}