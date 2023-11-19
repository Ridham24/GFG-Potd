#include<bits/stdc++.h>
using namespace std;
Node* findIntersection(Node* head1, Node* head2)
    {
        Node* t=new Node(0);
        Node* u=t;
        while(head1&&head2)
        {
            if(head1->data==head2->data)
            {
                t->next=new Node(head1->data);
                t=t->next;
                head1=head1->next;
                head2=head2->next;
            }
            else if(head1->data<head2->data)
            head1=head1->next;
            else
            head2=head2->next;
        }
        t=u;
        return t->next;
    }
int main(){

return 0;
}