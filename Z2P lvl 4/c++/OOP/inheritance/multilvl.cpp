#include<iostream>
using namespace std;

class person {
    private:
        string name;
    public:
        void getData() {
            cout << "Enter name: ";
            getline(cin, this->name);
        }
        void display() {
            cout << "Name: " << name << endl;
        }
};

class employee:public person {
    private:
        string company;
        int salary;
    public:
        void getData() {
            person::getData();
            cout << "Enter company name: ";
            cin >> company;
            cout << "Enter salary: ";
            cin >> salary;
            cin.ignore();
        }
        void display() {
            person::display();
            cout << "Company: " << company << endl;
            cout << "Salary: " << salary << endl;
        }
};

class programmer:public employee {
    private:
        string skillSet;
    public:
        void getData() {
            employee::getData();
            cout << "Enter skillset: ";
            getline(cin, skillSet);
        }
        void display() {
            employee::display();
            cout << "Skillset: " << skillSet << endl;
        }
};
int main() {

    return 0;
}