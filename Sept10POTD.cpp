#include<bits/stdc++.h>
using namespace std;
Node* bst(Node* root,int k)
        {
            if(root==NULL)
            {
                Node* t=new Node(k);
                return t;
            }
            if(root->data==k)
            return root;
            if(k<root->data)
            root->left=bst(root->left,k);
            else
            root->right=bst(root->right,k);
        }
    
        Node* insert(Node* root, int data) {
        
            // Your code goes here
            return bst(root,data);
    }
int main(){

return 0;
}