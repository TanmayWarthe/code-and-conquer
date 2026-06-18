#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int arr[] = {1,2,2,2,6,1};
  int size = sizeof(arr) / sizeof(arr[0]);
  int freq[7] = {0};
  int maxFreq = 0, ans =-1;

  for(int i=0; i<size; i++){
    freq[arr[i]]++;
  }

  for(int i=0; i<7; i++){
    if(freq[i] > maxFreq){
        maxFreq = freq[i];
        ans = i;
    }
  }

  cout << "Most Frequent Element : " << ans << "->" << maxFreq <<  endl;



  return 0;
}
