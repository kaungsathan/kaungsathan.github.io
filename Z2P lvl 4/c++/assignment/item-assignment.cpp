#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int barcode[4];
    string item[4];
    float price[4];
    int code = 0;
    int num = -1;
    int j = 0;

    for (int i = 0; i < 4; i++) {
        cout << "--------item " << (i + 1) << "----------\n";
        cout << "Enter barcode: ";
        cin >> barcode[i];
        cout << "Enter item: ";
        cin.ignore();
        getline(cin, item[i]);
        cout << "Enter price: ";
        cin >> price[i];
        cout << endl;
    }

    cout << "-------------------All item------------------------\n";
    cout << "Code" <<setw(20) << "Item Name" << setw(20) << "Price" << endl;

    for (int i = 0; i < 4; i++) {

        cout << barcode[i] << setw(20) << item[i] << setw(20) << price[i] << endl;
    
    }

    cout << "-----------item (price > 300)-----------\n";
    for (int i = 0; i < 4; i++) {
        if(price[i] > 300) {
            cout << setw(10) << item[i] << setw(15) << price[i] << endl;
        }
    }

    cout << "-------------------------------------\n";
    do
    {
        cout << "Enter barcode: ";
        cin >> code;
        for(int i = 0; i < 4; i++) {
            if(code == barcode[i]) {
                cout << "Code: " << barcode[i] << endl;
                cout << "Name: " << item[i] << endl;
                cout << "Price: " << price[i] << endl;
                num = i;
                break;
            }
        }
        
        if(num == -1) {
            cout << code << " does not exist!" << endl;
        }
        cout << "If you want to exist,press 1: ";
        cin >> j;
    } while (j != 1);

    return 0;
}