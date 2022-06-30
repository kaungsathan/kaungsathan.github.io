#include<iostream>
using namespace std;
int a = 10;
void display() {
    int a = 20;
    cout << "\nValue a: " << a;
}

void displayAnother(int a) {
    cout << "\nValue a parameter: " << a;
}

int main() {
    cout << "Value of a: " << a;
    display();
    displayAnother(100);
}