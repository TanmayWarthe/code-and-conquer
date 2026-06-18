#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i =0; i<size; i++){
        for(int j=1; j<size; j++){
            cout << "(" << arr[i] << arr[j] << ")";
        }
        cout << endl;
    }
    return 0;
}