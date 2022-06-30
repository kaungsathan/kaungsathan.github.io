#include<iostream>
using namespace std;
int main() {
    int number[3] = {50, 80, 70};

    for (int i = 0; i < 3; i++)
    {
        cout << number[i] << "\t";
    }

    int max_number = number[0];
    for (int i = 1; i < 3; i++)
    {
        if(max_number < number[i]) max_number = number[i];
    }

    cout << "\nmax number: " << max_number;
}