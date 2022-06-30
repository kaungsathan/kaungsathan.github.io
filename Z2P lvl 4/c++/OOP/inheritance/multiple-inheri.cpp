#include<iostream>
using namespace std;

class student {
    private:
        int rno;
    public:
        void enroll() {
            cout << "\nI have to enroll any subject\n";
        }
        void payTutionFees(int fees) {
            cout << "\nI have to pay tution fees: " << fees << endl;
        }
};

class instructor {
    private:
        int salary;
    public:
        void setSalary(int salary) {
            this->salary = salary;
        }
        void teach() {
            cout << "\nI have to teach a subjecy\n";
        }
};

class teachingassistance:public student, public instructor {
    public:
        teachingassistance() {
            cout << "\nI am a assiatance\n";
        }
};
int main() {

    return 0;
}