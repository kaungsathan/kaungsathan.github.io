#include<iostream>
using namespace std;
int main() {
    float bmi;

    cout << "Enter bmi value: ";
    cin >> bmi;

    if(bmi < 18.5) {
        cout << "Underweight";
    }
    else {
        if(bmi >= 185 && bmi <= 24.9){
            cout << "Normal weight";
        }
        else{
            if(bmi >= 25 && bmi <= 29.0) {
                cout << "overweight";
            }
            else{
                cout << "obesity";
            }
        }
    }
}