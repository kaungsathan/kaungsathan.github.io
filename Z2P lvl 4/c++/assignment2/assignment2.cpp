#include<iostream>
using namespace std;

void verifyEvenOrOdd() {
    int num;

    cout << "---------Even or odd---------\n";
    cout << "Enter any number: ";
    cin >> num;

    if(num%2) {
        cout << num << " is odd.\n";
    }else {
        cout << num << " is even.\n";
    }
}

void verifyPositiveOrNegative(int num) {
    if(num < 0) {
        cout << num << " is negative.\n";
    }else if(num > 0) {
        cout << num << " is positive.\n";
    }else {
        cout << num << " is zero.\n";
    }
}

void displayMultiplication(int num) {
    for (int i = 1; i <= 10; i++) {
        cout << num << " * " << i << " = " << (num * i) << endl;
    }
}

bool checkLogin(string name, string pass) {
    if(name == "mmit" && pass == "admin") {
        return true;
    }else {
        return false;
    }
}
int main() {

    int process = 0;

    while(process != 5) {

        cout << "\n1. verifyEvenOrOdd\n2. verifyPositiveOrNegative\n3. displayMultiplication\n4. checkLogin\n";
        cout << "Choose (1,2,3,4) to process and 5 to exist: ";
        cin >> process;

        if(process == 1) {
            verifyEvenOrOdd();

        }else if(process == 2) {
            cout << "\n----------Positive or negative---------\n";
            int num;
            cout << "Enter any number: ";
            cin >> num;
            verifyPositiveOrNegative(num);

        }else if(process == 3) {
            cout << "\n----------Display Multiplication---------\n";
            int num;
            cout << "Enter any number: ";
            cin >> num;
            displayMultiplication(num);

        }else if(process == 4) {
            string input_name, input_pass;

            cout << "Enter user name: ";
            cin >> input_name;
            cout << "Enter password: ";
            cin >> input_pass;

            bool result = checkLogin(input_name, input_pass);
            if(result) {
                cout << "Login success.\n";
            }else {
                cout << "Login failed.\n";
            }
            
        }
    }
    

    return 0;
}