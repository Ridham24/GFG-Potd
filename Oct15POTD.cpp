#include<bits/stdc++.h>
using namespace std;
void inorder(Node* root,vector<int>& v)
    {
        if(root==NULL)
        return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }

    Node* balance(int start,int end,vector<int>& v)
    {
        if(start>end)
        return NULL;
        int mid=start+(end-start)/2;
        Node* root=new Node(v[mid]);
        root->left=balance(start,mid-1,v);
        root->right=balance(mid+1,end,v);
        return root;
        
    }
    
    Node* buildBalancedTree(Node* root)
    {
    	// Code here
    	vector<int> v;
        inorder(root,v);
        root=NULL;
        root=balance(0,v.size()-1,v);
        return root;
    }
int main(){

return 0;
}