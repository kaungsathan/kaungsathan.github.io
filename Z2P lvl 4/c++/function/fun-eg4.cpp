#include<iostream>
using namespace std;
string brand[5];
int i = 0;
void addBrand(string input) {
    brand[i] = input;
    i++;
}
void show() {
    for (int i = 0; i < 5; i++) {
        cout << brand[i] << endl;
    }
}
int main() {

    
    for (int i = 0; i < 5; i++) {
        string get;

        cout << "Enter brand: ";
        cin >> get;

        addBrand(get);
    }
    cout << "-------All brand-------" << endl;
    show();

    return 0;
}