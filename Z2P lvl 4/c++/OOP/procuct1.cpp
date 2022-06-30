#include<iostream>
using namespace std;

class product {
    private:
        string name;
        string barcode;
        float price;
    
    public:
        product(string product_name, string barCode, float price) {
            this->name = product_name;
            this->barcode = barCode;
            this->price = price;
        }

        void showData() {
            cout << "\n----------Product Info-----------\n";
            cout << "Product Name: " << name;
            cout << "\nBarcode: " << barcode;
            cout << "\nPrice: " << price;
        }
    };
int main() {

    string name, barcode;
    float price;

    cout << "Enter product name: ";
    cin >> name;
    cout << "Enter barcode: ";
    cin >> barcode;
    cout << "Enter price: ";
    cin >> price;

    product product1 = product(name, barcode, price);
    product1.showData();

    return 0;
}