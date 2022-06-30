#include<iostream>
using namespace std;
string city[3];

void  enterData() {
    for (int i = 0; i < 3; i++) {
        cout << "Enter cities: ";
        getline(cin, city[i]);
    }
}

void showData() {
    cout << "------All city-------";
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << city[i];
        cout << endl;
    }
}
int main() {

    enterData();
    showData();

    return 0;
}