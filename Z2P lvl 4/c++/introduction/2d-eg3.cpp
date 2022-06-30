#include<iostream>
using namespace std;
int main() {
    int row = 2, col = 3;
    int num[row][col];

    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            cout << "Enter num[" << r << "][" << c << "]: ";
            cin >> num[r][c];
        }
    }

    for (int r = 0; r < row; r++) {
        for(int c = 0; c < col; c++) {
            cout << num[r][c] << "\t";
        }
        cout << "\n";
    }
}