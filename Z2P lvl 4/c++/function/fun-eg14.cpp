#include<iostream>
using namespace std;
int barcode[2];
string item[2];
float price[2];

void addItem(){
    for (int i = 0; i < 2; i++) {
        cout << "--------item " << (i + 1) << "----------\n";
        cout << "Enter barcode: ";
        cin >> barcode[i];
        cout << "Enter item: ";
        cin >> item[i];
        cout << "Enter price: ";
        cin >> price[i];
        cout << endl;
    }
}
int main() {

    return 0;
}