#include<iostream>
using namespace std;
int main() {
    int len = 4;
    int number[4] = {100, 80, 70, 55};

    for (int i = (len - 1); i >= 0; i--)
    {
        cout << number[i] << "\t";
    }
    
}