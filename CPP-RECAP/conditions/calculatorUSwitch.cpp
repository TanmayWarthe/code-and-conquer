#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    float a,b,result;
    char op;

    cout << "Enter the value of the a and b : ";
    cin >> a >> b;

    cout <<"Enter the op between (+ , - , *, /) to perform operation :";
    cin >> op;


    switch(op)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
         cout << "Invalid op";
    }


    cout << result;
    return 0;
}