#include <bits/stdc++.h>
using namespace std;

int add(int a , int b){
    return a + b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    cin>>x >> y;

    int res = add(x,y);

    cout << res;

    return 0;
}