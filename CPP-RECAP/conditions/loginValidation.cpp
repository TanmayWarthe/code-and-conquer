#include <bits/stdc++.h>
using namespace std;

int main()
{
//     ios::sync_with_stdio(false);
    // cin.tie(NULL);

    string username, password;

    string correctusername = "sayu";
    string correctpassword = "2717";

    cout << "Enter username : ";
    cin >> username;

    cout << "Enter password : ";
    cin >> password;

    if((username == correctusername) && (password == correctpassword)){
        cout << "Access Granted ! \n";
    }else{
        cout << "Access Denied ! \n";
    }
    return 0;
}