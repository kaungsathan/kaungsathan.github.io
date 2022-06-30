#include<iostream>
using namespace std;

class product {
    // variable
    public:
        int bar_code;
    private:
        string name;
        int price;
    
    // method
    public:
    void showData() {
        cout << "Barcode: " << bar_code;
        cout << "\nname: " << name;
        cout << "\nprice: " << price;
    }
};
int main() {

    product prod = product();

    prod.bar_code = 1001;
    // prod.name = "apple"; error due to private variable
    // prod.price = 399;

    return 0;
}