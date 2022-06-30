#include<iostream>
using namespace std;

class account {
    //variable
    public:
        string account_holder;
        string account_no;
        int balance;
    // method
    void createAccount(string holder, string no, int init_amt) {
        account_holder = holder;
        account_no = no;
        balance = init_amt;
    }
    void deposit(int disposit_amt) {
        balance += disposit_amt;
    }
    bool withdraw(int amt) {
        if(balance < amt) {
            return false;
        }else {
            balance -= amt;
            return true;
        }
    }
    void showData(){
        cout << "\n---------Current Infomation--------\n";
        cout << "Hoder: " << account_holder;
        cout << "\nNumber: " << account_no;
        cout << "\nBalance: " << balance << "ks.\n";
    }

    // constructor
    account(string holder,string acc_no,int amt) {
        this->account_holder = holder;
        this->account_no = acc_no;
        this->balance = amt;
    }

    account() {}//default
};
int main() {

    account acc1 = account();

    acc1.createAccount("kaungsat", "1234", 500000);

    acc1.deposit(500000);
    acc1.showData();

    bool result = acc1.withdraw(10000000);
    if(result) {
        cout << "\nwithdraw success\n";
        cout << "current balance: " << acc1.balance;

    }else {
        cout << "\nNot enough to withdraw\n";
        cout << "current balance: " << acc1.balance;
    }

    account acc2 = account("jane", "2333", 40000);
    acc2.showData();

    return 0;
}