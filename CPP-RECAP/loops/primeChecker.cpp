#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int n;
    int primeFlag = true;


    cout << "ENter a Number : ";
    cin >> n;

    if(n <= 1){
        primeFlag = false;
    }else{
    for(int i=2; i<n; i++){
        if( n % i ==0){
            primeFlag = false;
            break;
        }
    }
    }
    if(primeFlag){
        cout<< "Prime Number";
    }else{
        cout<< "Not a Prime Number";
    }

    return 0;
}