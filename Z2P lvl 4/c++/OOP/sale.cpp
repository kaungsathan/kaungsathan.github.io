#include<iostream>
using namespace std;

class saleRecord {
    // variable
    public:
        string item_name;
        double unit_price;
        int sale_qty;
    // method
    void addSaleRecord(string name, double price, int qty) {
        item_name = name;
        unit_price = price;
        sale_qty = qty;
    }
    double getSubTotal() {
        return unit_price * sale_qty;
    }
    void displayInfo() {
        cout << "\n";
        cout << item_name << "\t";
        cout << unit_price << "ks.\t";
        cout << sale_qty << "\t";
        cout << getSubTotal() << "ks.";
    }
};
int main() {

    saleRecord record1 = saleRecord();
    saleRecord record2 = saleRecord();
    saleRecord record3 = saleRecord();

    record1.addSaleRecord("Milk", 3700, 3);
    record2.addSaleRecord("Coffee", 2000, 4);
    record3.addSaleRecord("Burger", 1000, 2);

    cout << "-----------All salerecord---------\n";
    cout << "Name\tPrice\tqty\ttotal amount\n";
    record1.displayInfo();
    record2.displayInfo();
    record3.displayInfo();

    return 0;
}