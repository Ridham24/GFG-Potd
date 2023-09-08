#include<bits/stdc++.h>
using namespace std;
void inorder(Node* root,vector<int>& v)
    {
        if(!root)
        return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int> v;
        inorder(root,v);
        sort(v.begin(),v.end());
        Node* h=new Node(v[0]);
        root=h;
        for(int i=1;i<v.size();i++)
        {
            h->right=new Node(v[i]);
            h=h->right;
        }
        return root;
    }
int main(){

return 0;
}