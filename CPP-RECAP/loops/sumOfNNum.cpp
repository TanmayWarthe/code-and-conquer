#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int sum = 0;
    while(n!=0){
        int d = n%10;
        sum += d;
        n = n/10;
    }

    cout << "Sum of Number : " << sum ;
    return 0;
}