#include<iostream>
using namespace std;
int main() {
    int mark[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "enter mark " << (i + 1) << " : ";
        cin >> mark[i];
        
    }

    int i = 0;
    while (i < 3)
    {
        cout << mark[i] << "\n";
        i++;
    }

    i = 0;
    int total = 0;
    do
    {
        total += mark[i];
        i++;
    } while (i < 3);

    cout << "sum: " << total << " marks\n";
    cout << "average: " << (total / 3.0) << " marks\n";
    return 0;
}