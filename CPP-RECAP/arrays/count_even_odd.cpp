#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {2,3,5,1,6,7,4,9,8};
    int size = sizeof(arr)/sizeof(int);
    int evenCount = 0 , oddCount = 0;
    for(int i=0; i<size; i++){
        if(arr[i] % 2 == 0){
            evenCount += 1;
        }else{
            oddCount += 1;
        }
    }


    cout << "Even Count : " << evenCount << endl;
    cout << "Odd Count : " << oddCount << endl;
    return 0;
}