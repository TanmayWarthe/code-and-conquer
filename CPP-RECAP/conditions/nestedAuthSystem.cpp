#include <bits/stdc++.h>
using namespace std;

int main()
{

    string user , pass , secureans;
    int userOTP;

    string username = "admin";
    string password = "pass123";
    int otp = 4567;
    string securityAns = "blue";

    
    cout << "Enter the username :";
    cin >> user;

    cout << "Enter the password :";
    cin >> pass;

    cout << "Enter the otp :";
    cin >> userOTP;

    cout << "What is the Security Code :";
    cin >> secureans;

    if(user == username){
        if(pass == password){
            cout << "Password is correct !\n";
            cout << "OTP verification :";
            if(otp == userOTP){
                cout << "OTP is Verified !\n";
                if(secureans == securityAns){
                    cout << "User is Granted !";
                }else{
                    cout << "User is not Granted !";
                }
            }else{
                cout << "OTP is wrong\n";
            }
        }else{
            cout << "Password is incorrect\n";
        }   
    }else{
        cout<< "Invalid user!";
    }

    return 0;
}