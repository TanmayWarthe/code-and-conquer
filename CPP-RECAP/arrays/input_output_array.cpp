#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter the element in the array :";
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }


    cout << "Arrau elements are : ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}