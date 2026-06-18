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

    Node n1,n2,n3;

    n1.data = 5;
    n1.next = &n2;

    n2.data = 10;
    n2.next = &n3;

    n3.data = 15;
    n3.next = NULL;

    Node* temp = &n1;


    while(temp != NULL){
        cout << temp->data <<" ";
        temp = temp->next;
    }

    return 0;
}