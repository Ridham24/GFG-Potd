#include<bits/stdc++.h>
using namespace std;
Node *sortedInsert(struct Node* head, int data) {
        Node* cur=head;
        Node* t=new Node(data);
        if(head->data>data)
        {
            t->next=head;
            return t;
        }
        while(cur->next!=NULL&&cur->next->data<data)
        {
            cur=cur->next;
        }
        t->next=cur->next;
        cur->next=t;
        return head;
    }
int main(){

return 0;
}