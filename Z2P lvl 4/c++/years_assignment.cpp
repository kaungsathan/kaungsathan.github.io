#include<iostream>
using namespace std;
int main() {
    int years, months, days, total_days;

    cout << "Enter no of days: ";
    cin >> total_days;

    years = total_days / 365;
    months = (total_days % 365) / 30;
    days = (total_days % 365) % 30;

    cout << years << ":" << months << ":" << days;
}