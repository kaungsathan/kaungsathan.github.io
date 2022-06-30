#include<iostream>
using namespace std;

class student {
    private:
        int rno;
        string name;
        string course;
    
    public:
        void setRollno(int rno) {
            this->rno = rno;
        }
        int getRollno() {
            return rno;
        }

        void setName(string name) {
            this->name = name;
        }
        string getName() {
            return name;
        }

        void setCourse(string course) {
            this->course = course;
        }
        string getCourse() {
            return course;
        }

        bool search(int rno) {
            if(this->rno == rno) {
                return true;

            }else {
                return false;
            }
        }
};
int main() {

    student std[5];
    int input_rno;
    string input_name;
    string input_course;

    for (int i = 0; i < 5; i++) {
        cout << "----------Enter data for student " << (i + 1) << "----------\n";
        cout << "Enter roll no: ";
        cin >> input_rno;
        std[i].setRollno(input_rno);

        cout << "Enter name: ";
        cin >> input_name;
        std[i].setName(input_name);

        cout << "Enter course: ";
        cin >> input_course;
        std[i].setCourse(input_course);
    }

    for (int i = 0; i < 5; i++) {
        cout << "\n----------Data for student " << (i + 1) << "----------";
        cout << "\nRoll no: " << std[i].getRollno();
        cout << "\nName: " << std[i].getName();
        cout << "\nCourse: " << std[i].getCourse();
        cout << "\n";
    }

    int index = 0;
    do
    {
        int search_rno;
        bool result;
        
        cout << "\nSearch roll no: ";
        cin >> search_rno;

        for (int i = 0; i < 5; i++) {
            result = std[i].search(search_rno);

            if(result) {
                cout << "\nRoll no= " << std[i].getRollno();
                cout << "\nName = " << std[i].getName();
                cout << "\nCourse = " << std[i].getCourse();
                cout << "\n";
                break;
            }
        }

        if(!result) {
            cout << "No result\n";
        }
        cout << "If you want to exist, enter '9': ";
        cin >> index;
    } while (index != 9);

    return 0;
}