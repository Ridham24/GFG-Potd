#include<bits/stdc++.h>
using namespace std;
void check(Node* root,int x,int&a)
    {
        if(root==NULL)
        return;
        if(root->data<=x)
        {
            a=max(a,root->data);
            check(root->right,x,a);
        }
        else
        {
            check(root->left,x,a);
        }
    }

    int floor(Node* root, int x) {
        // Code here
        int a=-1;
        check(root,x,a);
        return a;
    }
int main(){

return 0;
}