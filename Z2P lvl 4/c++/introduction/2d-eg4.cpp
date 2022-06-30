#include<iostream>
using namespace std;
int main() {
    int row = 2, col = 3;
    int num[row][col];

    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            cout << "enter num[" << r << "][" << c << "]: ";
            cin >> num[r][c];
        }
    }

    int total = 0;
    for(int r = 0; r < row; r++) {
        for(int c = 0; c < col; c++) {
            cout << num[r][c] << "\t";
            total += num[r][c];
        }
        cout << "\n";
    }

    cout << "sum: " << total;
}