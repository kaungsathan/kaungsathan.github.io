#include<iostream>
using namespace std;
int main() {
    int num[2][3];

    num[0][0] = 100;
    num[0][1] = 20;
    num[0][2] = 200;

    num[1][0] = 50;
    num[1][1] = 500;
    num[1][2] = 60;

    cout << num[0][0] << "\t";
    cout << num[0][1] << "\t";
    cout << num[0][2] << "\t";
    cout << num[1][0] << "\t";
    cout << num[1][1] << "\t";
    cout << num[1][2] << "\t";
}