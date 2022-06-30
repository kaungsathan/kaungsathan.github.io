#include<iostream>
using namespace std;
int main() {
    string uName, uPass;

    input:
    cout << "Enter user name: ";
    cin >> uName;
    cout << "Enter user password: ";
    cin >> uPass;

    if(uName != "mmit" || uPass != "admin123")
        goto input;

    cout << "Login success...";
}