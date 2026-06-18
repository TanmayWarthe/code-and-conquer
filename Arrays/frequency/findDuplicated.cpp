#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,2,3,3,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int freq[5] = {0};

    for(int i =0; i<size; i++){
        freq[arr[i]]++;
    }

    for(int i=0; i<5; i++){
    if(freq[i] > 1){
      cout << freq[i] << endl;
    }
  }


    

    return 0;
}