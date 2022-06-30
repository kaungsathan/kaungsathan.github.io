#include<iostream>
using namespace std;

class Base {
    private:
        int x;
        int y;
    public:
        Base() {
            cout << "\nthis is base default constructor\n";
        }
        Base(int a, int b) {
            this->x = a;
            this->y = b;
            cout << "\nthis is base argument con\n";
        }
};

class Derived:public Base {
    private:
        int z;
    public:
        Derived() {
            cout << "\nthis is derived default constructor\n";
        }
        Derived(int i,int j,int k) {
            this->z = k;
            cout << "\nthis is derived argument con\n";
        }
};
int main() {

    Derived obj = Derived();

    return 0;
}