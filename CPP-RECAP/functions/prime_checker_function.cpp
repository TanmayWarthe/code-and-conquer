#include <bits/stdc++.h>
using namespace std;


void primeChecker(int n, int &isBool){
 
    if(n <= 1){
        isBool = false;    
    }else{
        for(int i=2; i*i <= n; i++){
            if(n % i == 0){
                isBool = false;
                break;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int isBool = true;

    primeChecker(n ,isBool);

    if(isBool){
        cout<<"Prime Number";
    }else{
        cout << "Not a Prime Number";
    }

    return 0;
}