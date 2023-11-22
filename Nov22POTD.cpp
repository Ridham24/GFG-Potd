#include<bits/stdc++.h>
using namespace std;
bool chck(Node* r1,Node* r2)
    {
        if(r1==NULL&&r2==NULL)
        return true;
        if(r1==NULL||r2==NULL)
        return false;
        if(r1->data!=r2->data)
        return false;
        if(chck(r1->left,r2->right)&&chck(r1->right,r2->left))
        return true;
    }
    
    bool isSymmetric(struct Node* root)
    {
	    return chck(root,root);
    }
int main(){

return 0;
}