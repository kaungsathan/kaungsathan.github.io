#include<iostream>
using namespace std;

bool equals(int arg1, int arg2) {
    return (arg1 == arg2) ? true : false;
}

bool equals(double arg1, double arg2) {
    return (arg1 == arg2) ? true : false;
}

bool equals(char arg1, char arg2) {
    return (arg1 == arg2) ? true : false;
}

bool equals(string arg1, string arg2) {
    return (arg1 == arg2) ? true : false;
}

int main() {

    cout << "100==200: " << equals(100, 200);
    cout << "\n'hello' == 'world': " << equals("hello", "world");

    return 0;
}