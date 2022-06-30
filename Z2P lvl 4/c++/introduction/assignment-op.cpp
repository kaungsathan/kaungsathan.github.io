#include<iostream>
using namespace std;
int main() {
    int a = 7, b = 2;

    cout << "a = " << a;
    cout << "\nb = " << b;

    a += b;
    b += 5;

    cout << "\nAfter a += b, a = " << a;
    cout << "\nAfter b += 5, b = " << b;
}