#include <bits/stdc++.h>
using namespace std;

void calculator(float a , float b , char op ){

    int result;
    switch(op){
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
            cout << "Invalid Input";
    }

    cout << "Result : "<< result;

}

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    float num1 , num2;
    cout << "Enter the num1 and num2 : ";
    cin >> num1 >> num2;

    char op;
    cout << "Enter operator (+ , - , * , /) : ";
    cin >> op;

    calculator(num1 , num2 , op);
    return 0;
}