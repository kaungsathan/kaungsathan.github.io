#include<iostream>
using namespace std;
int main() {
    int price[2][3] = {
        {122, 32, 20},
        {15, 98, 80}
        };

    cout << "------All numbers------\n";

    for (int r = 0; r < 2; r++) {
        for(int c = 0; c < 3; c++) {
            cout << price[r][c] << "\t";
        }
        cout << "\n";
    }

    for (int r = 0; r < 2; r++) {
        int max_num = price[r][0];
        for(int c = 1; c < 3; c++) {
            if(max_num < price[r][c]) {
                max_num = price[r][c];
            }
        }
        cout << "Maximum number of row " << (r + 1) << ": " << max_num;
        cout << "\n";
    }
}