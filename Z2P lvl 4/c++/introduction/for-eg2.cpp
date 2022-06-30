#include<iostream>
using namespace std;
int main() {

    for (int i = 0, j = 10; (i < 6 && j > 1); i++, j--)
    {
        cout << "i = " << i << "\t" << "j = " << j;
        cout << "\n";
    }
    
}