#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int arr[] = {1,2,2,2,6,1};
  int size = sizeof(arr) / sizeof(arr[0]);
  int freq[7] = {0};

  for(int i=0; i<size; i++){
    freq[arr[i]]++;
  }

  for(int i=0; i<7; i++){
    if(freq[i] > 0){
      cout << i << "->" << freq[i] << endl;
    }
  }

  return 0;
}
