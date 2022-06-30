#include<iostream>
using namespace std;

bool checkLogin(string mail,string pass) {
    // if(mail == "jk@gmail.com" && pass == "123"){
    //     return true;
    // }else {
    //     return false;
    // }
    return (mail == "jk@gmail.com" && pass == "123") ? true : false;
}
int main() {

    string email, pass;

    cout << "Enter email: ";
    cin >> email;
    cout << "Enter password: ";
    cin >> pass;

    bool result = checkLogin(email, pass);
    if(result == 1)
        cout << "login success";
    else
        cout << "login invalid";

    return 0;
}