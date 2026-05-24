#include <bits/stdc++.h>
using namespace std;


void change(int &x , int &b){
    int temp  = x;
    x=b;
    b=temp;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;
    
    change(a,b);
    
    cout << a << " , " << b << endl;

    return 0;
}