#include<iostream>
using namespace std;
void checkLogin() {
    string email, pass;

    input:
    cout << "Enter email: ";
    cin >> email;
    cout << "Enter pass: ";
    cin >> pass;
    
    if(email == "jk@gmail" && pass == "123") {
        cout << "Login success";
    }else {
        int num = 0;
        cout << "email or pass was invalid" << endl;
        cout << "Try again: press '1' ";
        cin >> num;
        if(num == 1) {
            goto input;
        }
    }


}
int main() {

    checkLogin();

    return 0;
}