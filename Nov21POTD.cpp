#include<bits/stdc++.h>
using namespace std;
bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        if(r1==NULL&&r2==NULL)
        return true;
        if((r1==NULL&&r2!=NULL)||(r1!=NULL&&r2==NULL))
        return false;
        if(r1->data!=r2->data)
        return false;
        bool b1=isIdentical(r1->left,r2->left);
        bool b2=isIdentical(r1->right,r2->right);
        if(b1&&b2)
        return true;
        return false;
    }
int main(){

return 0;
}