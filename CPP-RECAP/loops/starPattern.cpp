#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int row, cols;
    cin >> row >> cols;


    for(int i=0; i<row; i++){
        for(int j=0; j<i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}