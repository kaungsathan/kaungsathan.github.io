#include<iostream>
using namespace std;

class employee {
    private:
        int empno;
        string rank;
        string department;
        float salary;
    
    public:
        void getData(int no, string rank, string department, float salary) {
            this->empno = no;
            this->rank = rank;
            this->department = department;
            this->salary = salary;
        }

        void showData() {
            cout << "Employee no: " << this->empno;
            cout << "\nRank: " << this->rank;
            cout << "\nDepartment: " << this->department;
            cout << "\nSalary: " << this->salary;
            cout << "\n";
        }
};
int main() {

    employee emp[5];
    int input_empno;
    string input_rank, input_department;
    float input_salary;

    for (int i = 0; i < 5; i++) {

        cout << "\n-------Employee " << (i + 1) << "---------\n";
        cout << "Enter employee no: ";
        cin >> input_empno;
        cout << "Enter rank: ";
        cin >> input_rank;
        cout << "Enter department: ";
        cin >> input_department;
        cout << "Enter salary: ";
        cin >> input_salary;

        emp[i].getData(input_empno, input_rank, input_department, input_salary);
    }

    for (int i = 0; i < 5; i++) {
        cout << "\n-------Employee " << (i + 1) << "---------\n";
        emp[i].showData();
    }

        return 0;
}