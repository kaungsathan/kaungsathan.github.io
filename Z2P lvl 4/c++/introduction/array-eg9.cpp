#include<iostream>
using namespace std;
int main() {
    string brand[4] = {"iphone", "samsung", "vivo", "mi"};
    string search_name;
    int index = -1;

    cout << "Enter brand name: ";
    cin >> search_name;

    for (int i = 0; i < 4; i++)
    {
        if(search_name == brand[i]) {
            index = i;
            break;
        }
    }

    if(index == -1) {
        cout << search_name << " is not found!";
    }
    else {
        cout << search_name << " is found at " << index;
    }
    return 0;
}