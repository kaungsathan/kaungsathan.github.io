#include<iostream>
using namespace std;

class product {
    private:
        int barcode;
        string name;
    
    public:
        product() {}

        bool setBarcode(int code) {
            if(code >= 1000 && code <= 9999) {
                this->barcode = code;
                return true;
            }else {
                return false;
            }
        }

        int getBarcode() {
            return barcode;
        }

        void setName(string name) {
            this->name = name;
        }

        string getName() {
            return name;
        }

        void showData() {
            cout << "\n------Data Info--------\n";
            cout << "Barcode: " << getBarcode();
            cout << "\nName: " << getName();
        }
};
int main() {

    int code;
    string name;
    product p1 = product();

    cout << "Enter barcode: ";
    cin >> code;
    bool result = p1.setBarcode(code);

    while(!result) {
        cout << "Enter valid code: ";
        cin >> code;
        result = p1.setBarcode(code);
    }

    cout << "Enter name: ";
    cin >> name;
    p1.setName(name);

    p1.showData();

    return 0;
}