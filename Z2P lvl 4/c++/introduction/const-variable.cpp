#include<iostream>
using namespace std;
int main() {
    const int LENGTH = 10;
    const int WIDTH = 5;
    const string NAME = "Rectangle";
    int area;

    area = LENGTH * WIDTH;
    cout << "Length: " << LENGTH;
    cout << "\nWidth: " << WIDTH;
    cout << "\nArea: " << area;
    cout << "\nName: " << NAME;
}