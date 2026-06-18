#include <bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n==0)
        return;

    cout << n << endl;

    fun(n-1);
}

void fun1(int n)
{
    if(n == 0)
        return;

    cout << n;

    fun(n-1);

    cout << n;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    fun1(5);

    return 0;
}