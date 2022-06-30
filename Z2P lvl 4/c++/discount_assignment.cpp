#include<iostream>
using namespace std;
int main() {
    int price;
    float discount, result, dis_value;
    cout << "Enter product price: ";
    cin >> price;

    cout << "Discount value: ";
    cin >> discount;

    dis_value = discount / 100;
    float total_value = dis_value * price;

    result = price - total_value;
    cout << "Discount price: " << result;
}