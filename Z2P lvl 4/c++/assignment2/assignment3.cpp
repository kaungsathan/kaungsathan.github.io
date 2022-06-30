#include<iostream>
using namespace std;

int findLargestNumber(int num1, int num2, int num3) {
    int largest_num = num1;
    if(largest_num < num2) {
        largest_num = num2;
    }
    
    if(largest_num < num3) {
        largest_num = num3;
    }

    return largest_num;
}

int findSmallestNumber(int num1, int num2, int num3) {
    int smallest_num = num1;
    if(smallest_num > num2) {
        smallest_num = num2;
    }

    if(smallest_num > num3) {
        smallest_num = num3;
    }

    return smallest_num;
}
int main() {

    int num1, num2, num3;

    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    cout << "Enter num3: ";
    cin >> num3;

    cout << "Largest number: " << findLargestNumber(num1, num2, num3);
    cout << "\nSmallest number: " << findSmallestNumber(num1, num2, num3);

    return 0;
}