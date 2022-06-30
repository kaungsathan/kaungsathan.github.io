#include<iostream>
using namespace std;
int main() {
    int loan, month;
    float rate;

    cout << "Enter loan amount: ";
    cin >> loan;
    cout << "Enter rate: ";
    cin >> rate;
    cout << "Enter number of month: ";
    cin >> month;

    float monthly_interest = (rate / 100) * loan;
    float interest = monthly_interest * month;
    cout << "Monthly interest: " << monthly_interest;
    cout << "\nYour interest: " << interest;
}