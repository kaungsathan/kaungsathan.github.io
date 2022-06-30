#include<iostream>
using namespace std;

class fruit {
    // variable
    public:
        string name;
        int price;
    
    // method
    public: void setData(string na, int price) {
            name = na;
            this ->price = price;
    }

    public: void showData() {
            cout << "\nName: " << name;
            cout << "\nPrice: " << price;
    }
};
int main() {

    fruit f1, f2;

    f1.name = "orange";
    f1.price = 400;
    f1.showData();

    cout << "\n------another fruit---------\n";
    f2.setData("apple", 500);
    // f2.showData();
    cout << "Name: " << f2.name;
    cout << "\nprice: " << f2.price;

    return 0;
}