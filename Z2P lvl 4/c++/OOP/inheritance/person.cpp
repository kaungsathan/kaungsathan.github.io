#include<iostream>
using namespace std;

class person {
    protected:
        string name;
        string nrc;
    public:
        void initData(string name, string nrc) {
            this->name = name;
            this->nrc = nrc;
        }
        void showData() {
            cout << "\nName: "<< name;
            cout << "\nNrc no: "<< nrc << endl;
        }
};

class student:public person {
    private:
        int rno;
    public:
        student(int rno, string name, string nrc) {
            this->rno = rno;
            initData(name, nrc);
        }
        void showData() {
            cout << "\nRoll no: " << rno;
            person::showData();
        }
        void attend() {
            cout << "\nHello, Im attending 5th year\n";
        }
};
int main() {

    return 0;
}