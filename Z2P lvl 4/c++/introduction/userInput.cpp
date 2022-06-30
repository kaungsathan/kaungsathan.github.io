#include<iostream>
using namespace std;
int main() {
    int emp_no;
    string name;
    string city;
    float salary;
    char ch;

    cout << "_____ User Input _____\n";
    cout << "Enter employee no: ";
    cin >> emp_no;
    cout << "Enter name: ";
    //cin >> name;
    cin.ignore();
    getline(cin, name);
    cout << "Enter city: ";
    //cin >> city;
    cin.ignore();
    getline(cin, city);
    cout << "Enter salary: ";
    cin >> salary;
    cout << "Enter any single character: ";
    cin >> ch;

    cout << "EmpNo: " << emp_no;
    cout << "\nName: " << name;
    cout << "\nCity: " << city;
    cout << "\nSalary: " << salary << " ks";
    cout << "\nCharacter: " << ch;
}