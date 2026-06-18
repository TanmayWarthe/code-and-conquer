#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
};

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(NULL);

    Node n1,n2,n3,n4;

    n1.data = 10;
    n1.next = &n2;

    n2.data = 20;
    n2.next = &n3;

    n3.data = 30;
    n3.next = &n4;

    n4.data = 40;
    n4.next = NULL;


    Node *temp = &n1;

    int count = 0;

    while(temp != NULL){
        count++;
        temp =temp->next;
    }


    cout << "Total Nodes Count is : " << count ;
    
    return 0;
}