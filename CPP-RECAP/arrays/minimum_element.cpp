#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {12, 54, 64, 23, 62, 2, 67, 34};
    int size = sizeof(arr)/sizeof(arr[0]);
    int minVal = INT_MAX;


    for(int i=0; i<size; i++){
        if(arr[i] < minVal){
            minVal = arr[i];
        }
    }
    

    cout << "Mnimum value is : "<< minVal;
    return 0;
    
}