#include <bits/stdc++.h>
using namespace std;


void change(int x , int y){
    int temp  = x;
    x=y;
    y=temp;

    cout << x << "-" << y << endl;
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