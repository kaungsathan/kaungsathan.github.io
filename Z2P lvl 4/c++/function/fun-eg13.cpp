#include<iostream>
using namespace std;

int addNumber(int a, int b = 7, int c = 12){
    return (a + b + c);
}
int main() {

    cout << "one number: " << addNumber(100);
    cout << "\ntwo number: " << addNumber(100, 200);
    cout << "\nthree number: " << addNumber(100, 200, 300);
    return 0;
}