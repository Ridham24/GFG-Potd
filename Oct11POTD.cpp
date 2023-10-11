#include<bits/stdc++.h>
using namespace std;
int check(Node *root)
    {
        if(root==NULL)
        return 0;
        int h1=check(root->left);
        int h2=check(root->right);
        if(h1==-1||h2==-1)
        return -1;
        if(abs(h1-h2)>1)
        return -1;
        return max(h1,h2)+1;
    }
    
    bool isBalanced(Node *root)
    {
        //  Your Code here
        if(check(root)==-1)
        return false;
        return true;
    }
int main(){

return 0;
}