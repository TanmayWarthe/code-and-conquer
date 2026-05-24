#include <bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(NULL);

    int n;
    cout << "Enter the number  :";
    cin >>n;

    int rev = 0;
    while(n!=0){
        int d = n%10;
        rev = rev * 10 + d;
        n = n/10;
    }

    cout << "Reserve : " << rev;

    return 0;
}