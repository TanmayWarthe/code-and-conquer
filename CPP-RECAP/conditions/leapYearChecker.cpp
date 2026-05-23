#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int year;
    cout << "Enter the year :";
    cin >> year ;

    if((year % 4 == 0 && year % 100 !=0) || year % 400 == 0){
        cout << "Leap Year !" << endl;

    }else{
        cout << "Not a Leap Year !";
    }

    return 0;
}