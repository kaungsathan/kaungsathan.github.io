#include<iostream>
using namespace std;
void display(char ch='*',int no =3){
    for (int i = 0; i < no; i++) {
        cout << ch << " ";
    }
}
int main () {

    cout << "no argument: ";
    display();
    cout << "\nwith argument: ";
    display('#', 5);

    return 0;
}