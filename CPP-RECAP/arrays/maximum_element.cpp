#include<iostream>
using namespace std;

int main(){

    int arr[] = {12, 54, 64, 23, 62, 2, 67, 34};
    int size = sizeof(arr)/sizeof(arr[0]);
    int maxVal = arr[0];


    for(int i=0; i<size; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
    }
    

    cout << "Maximum value is : "<< maxVal;
    return 0;
    
}