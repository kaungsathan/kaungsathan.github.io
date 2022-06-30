#include<iostream>
using namespace std;
void changeValue(int num) {
    num = num + 20;
    cout << "inside fun: " << num;
    cout << endl;
}

void changeValueAnother(int *val) {
    *val = *val + 20;
    cout << "inside fun: " << (*val);
    cout << endl;
}
int main() {
    int num = 10;
    int num1 = 10;

    cout << "--------call by value--------";
    cout << endl;
    cout << "before calling: " << num;
    cout << endl;
    changeValue(num);
    cout << "after calling: " << num;
    cout << endl;

    cout << "--------call by ref--------";
    cout << endl;
    cout << "before calling: " << num1;
    cout << endl;
    changeValueAnother(&num1);
    cout << "after calling: " << num1;
    cout << endl;

    return 0;
}