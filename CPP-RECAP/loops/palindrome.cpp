#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int n;
    cin >> n;
 
    int rev =0 ,real = n;

    while(n!=0){
        int digit = n%10;
        rev = rev * 10 + digit;
        n = n/10;  
    }
    
    cout << rev;
    if( rev == real){
        cout << "Palindrome" << endl;
    }else{
        cout << "Not Palindrome" << endl ;
    }

    return 0;
}