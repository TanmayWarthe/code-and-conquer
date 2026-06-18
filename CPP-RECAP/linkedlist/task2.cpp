// Count nodes in:

// 100 → 200 → 300 → 400

// Create:

// 5 → 15 → 25 → NULL

// and print all elements.


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

    Node n1,n2,n3,n4;

    n1.data = 100;
    n1.next = &n2;

    n2.data = 200;
    n2.next = &n3;

    n3.data = 300;
    n3.next = &n4;

    n4.data = 400;
    n4.next = NULL;

    Node* temp = &n1;
    int c =0;

    while(temp != NULL){
        c++;
        // cout << temp->data <<" ";
        temp = temp->next;
    }

    cout << c << endl;
    return 0;
}