#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    string User;
    string Pass;
    cout << "Enter Username: ";
   
    while (1) {
        cin >> User;

        if (User.empty()) {
            cout << "Username is empty" << endl;
        }
        else
            break;
    }
   
    cout << "Enter Password: ";
    while (1) {
        cin >> Pass;

        if (Pass.empty()) {
            cout << "Password is empty" << endl;
        }
        else
            break;
    }
   
    ofstream File(User);
    File << Pass;

  

    File.close();
    cout << "User has been registered" <<endl;
}
