#include<iostream>
using namespace std;
void checkEven(int num) {
    if(num%2)
        cout << num << " is odd";
    else
        cout << num << " is even";

    cout << "\n";
}
int main() {
    int num1 = 153, num2 = 844, num3 = 571;

    checkEven(num1);
    checkEven(num2);
    checkEven(num3);

    return 0;
}