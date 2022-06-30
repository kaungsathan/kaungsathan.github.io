#include<iostream>
using namespace std;
int calculateDiscountItem(int price, int percentage) {

    int result = price * ((float)percentage / 100);
    int final_res = price - result;
    return final_res;
}

void calculateInterest(int loan_amount, int interest_rate, int noOfMonths) {
    int monthly_interest = loan_amount * ((float)interest_rate / 100);
    int total_interest = monthly_interest * noOfMonths;

    cout << "monthly interest: " << monthly_interest << endl;
    cout << "total interest: " << total_interest << endl;
}

void countZeroOccurences() {

    int num[5];
    int count = 0;
    for (int i = 0; i < 5; i++) {
        cout << "Enter num" << (i + 1) << ": ";
        cin >> num[i];

        if(num[i] == 0) {
            count++;
        }
    }
    cout << "no of zero: " << count;
}
int main () {

    cout << "---------Discount---------\n";
    int price, percentage;

    cout << "Item price: ";
    cin >> price;
    cout << "Discount value: ";
    cin >> percentage;

    cout << "After discount, price: " << calculateDiscountItem(price, percentage);

    cout << "\n---------Interest-------------\n";
    int amount, interest, noOfMonths;
    cout << "Loan amount: ";
    cin >> amount;
    cout << "Interest rate: ";
    cin >> interest;
    cout << "No of months: ";
    cin >> noOfMonths;

    calculateInterest(amount, interest, noOfMonths);

    cout << "\n---------Count Zero----------\n";
    countZeroOccurences();

    return 0;
}