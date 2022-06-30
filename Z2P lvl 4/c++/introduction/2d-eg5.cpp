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

    
    for(int c = 0; c < col; c++) {
        int column = 0;
        for(int r = 0; r < row; r++) {
            // cout << num[r][c] << "\n";
            column += num[r][c];
        }
        
        cout << "column " << c << ": " << column;
        cout << "\n";
    }
}