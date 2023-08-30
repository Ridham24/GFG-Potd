#include<bits/stdc++.h>
using namespace std;
Node* deleteNode(Node *head,int x)
{
    //Your code here
    Node* h1=head;
    Node* h2=head;
    
    if(x==1)
    return head->next;
    x--;
    while(x--)
    {
        h2=head;
        head=head->next;
    }
    h2->next=head->next;
    return h1;
}
int main()
{
    return 0;
}