#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {2,3,1,4,2,1,2,6,7};
    int size = sizeof(int)/sizeof(arr);
    int freqArr[100] = {0};
    for(int i=0; i<size; i++){
        int count = 0;
        for(int j=0;j<size; j++){
            if(arr[i] == arr[j]){
                count += 1;
            }
        }
        
        
    }

    for(int i=0; i<size; i++){
        cout << freqArr[i] << " ";
    }
    return 0;
}