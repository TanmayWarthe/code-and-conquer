#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int sub1 , sub2 , sub3 , sub4 , sub5 , sub6 , sub7;

    cout<< "Enter the marks of the 7 subjects with space :";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5 >> sub6 >> sub7;

    int total = sub1 + sub2 + sub3 + sub4 + sub5 + sub6 + sub7;
    int percentage =(total/7);

    if(percentage >= 90){
        cout << "A";
    }else if(percentage >= 80){
        cout << "B";
    }else if(percentage >= 70){
        cout << "C";
    }else if(percentage >= 60){
        cout << "D";
    }else if(percentage >= 45 || percentage <= 60){
        cout << "E";
    }else{
        cout << "FAIL";
    }
    return 0;
}