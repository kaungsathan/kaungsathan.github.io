#include<iostream>
using namespace std;
int main() {
    int num[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter num[" << i << "]: ";
        cin >> num[i];
    }

    cout << "------All numbers-------" << endl;
    for(int i = 0; i < 5; i++) {
        cout << num[i] << "\t";
    }

    cout << "\n------divisible by 3----" << endl;
    for(int i = 0; i < 5; i++) {
        if(num[i]%3 == 0) {
            cout << num[i] << "\t";
        }
    }
    return 0;
}