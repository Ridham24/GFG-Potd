#include<bits/stdc++.h>
using namespace std;
Node* reverseDLL(Node * head)
    {
        Node* h1=head;
        Node* h2=head;
        int c=0;
        while(h2->next!=NULL)
        {
            h2=h2->next;
            c++;
        }
        c=(c+1)/2;
        while(c--)
        {
            swap(h1->data,h2->data);
            h1=h1->next;
            h2=h2->prev;
        }
        return head;
    }
int main(){

return 0;
}