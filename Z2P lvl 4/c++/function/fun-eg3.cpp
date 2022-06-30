#include<iostream>
using namespace std;

int salaries[5] = {10000, 20000, 40000, 50000, 60000};

int max_salary() {
    int max_salary = salaries[0];
    for (int i = 0; i < 5; i++) {
        if(max_salary < salaries[i]) {
            max_salary = salaries[i];
        }
    }
    return max_salary;
}

int total_salary() {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total += salaries[i];
    }
    return total;
}
int main() {

    int result = max_salary();

    cout << "max salary: " << result << endl;
    cout << "total salaries: " << total_salary();

    return 0;
}