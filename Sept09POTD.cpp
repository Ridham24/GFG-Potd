#include<bits/stdc++.h>
using namespace std;
void inorder(Node* root,int& k,int& c)
    {
        if(root==NULL)
        return ;
        inorder(root->right,k,c);
        k--;
        if(k==0)
        c=root->data;
        inorder(root->left,k,c);
        
    }
    
    int kthLargest(Node *root, int k)
    {
        //Your code here
        int c=0;
        inorder(root,k,c);
        return c;
    }
int main(){

return 0;
}