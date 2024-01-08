struct Node * mergeResult(Node *n1,Node *n2)
    {
        Node* head=NULL;
        while(n1!=NULL&&n2!=NULL)
        {
            if(n1->data<n2->data)
            {
                Node* t=new Node();
                t->data=n1->data;
                t->next=head;
                head=t;
                n1=n1->next;
            }
            else
            {
                Node* t=new Node();
                t->data=n2->data;
                t->next=head;
                head=t;
                n2=n2->next;
            }
        }
        while(n1!=NULL)
        {
            Node* t=new Node();
                t->data=n1->data;
                t->next=head;
                head=t;
                n1=n1->next;
        }
        while(n2!=NULL)
        {
            Node* t=new Node();
                t->data=n2->data;
                t->next=head;
                head=t;
                n2=n2->next;
        }
        return head;
    }  