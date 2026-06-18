#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {12,4,32,6,7};
    int sum = 0;
    int n = 5;

    for(int i=0;i<n; i++){
        sum  += arr[i];
    }


    cout <<"Sum : " << sum;

    return 0;
}