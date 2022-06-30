#include<iostream>
using namespace std;
int main() {
    int mark[] = {100, 20, 89};
    string name[] = {"Aung Aung", "Mya Mya", "Hla Hla"};

    for (int i = 0; i < 3; i++)
    {
        cout << mark[i] << "\n";
    }
    
    for (int i = 0; i < 3; i++)
    {
        cout << name[i] << "\n";
    }
    
    for (int i = 0; i < 3; i++)
    {
        cout << name[i] << " got " << mark[i] << " marks\n";
    }
    
}