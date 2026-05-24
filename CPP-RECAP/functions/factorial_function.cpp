#include <bits/stdc++.h>
using namespace std;


int fact(int n){

    int fact = 1;
    while(n>0){
        fact = fact * n;
        n--;
    }

    return fact;
}


int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int n;
    cout << "Enter a number : ";
    cin >> n;

    cout << "Factorial of a number " << n << " is : " << fact(n)<< "\n";
    

    return 0;
}