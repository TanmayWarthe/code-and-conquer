#include <bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node *next;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    // at this time the actual memory is created and get the memoery address to the objects
    Node n1; 
    Node n2;

    n1.data = 27;
    n1.next = &n2;

    n2.data = 17;
    n2.next = NULL;

    cout << n1.data << endl;


    // n1.next stores address of n2
    // so using -> we access n2 data
    cout << n1.next->data << endl;
    

    return 0;
}