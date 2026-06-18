#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);


    int arr[] = {12,54,64,23,62,2,67,34};
    int target = 12;
    int size = sizeof(arr[0])/sizeof(int);

    for(int i=0; i<size; i++){
        if(arr[i]==target){
            cout << "Target is found !!!";
        }else{
            cout << "Target is not found !!!";
        }
    }
    

    return 0;
}