#include<iostream>
using namespace std;
int main() {
    float price[2][3] = {
        {1200.9, 340, 600.2},
        {1100, 4900, 500.5}
        };

    cout << "--------All numbers-------\n";

    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            cout << price[r][c] << "\t";
        }
        cout << "\n";
    }

    for(int c = 0; c < 3; c++) {
        float max_number = price[0][c];
        for(int r = 1; r < 2; r++) {
            if(max_number < price[r][c]) {
                max_number = price[r][c];
            }
        }
        cout << "Max number of column " << (c + 1) << " : " << max_number;
        cout << "\n";
    }

    return 0;
}