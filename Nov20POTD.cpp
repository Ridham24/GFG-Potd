#include<bits/stdc++.h>
using namespace std;
void check(Node* root,int k,long long& c,long long s,unordered_map<long long,long long>& m)
    {
        if(root==NULL)
        return;
        s+=root->data;
        if(s==k)
        c++;
        if(m.find(s-k)!=m.end())
        {
            if(m[s-k]>0)
            c+=m[s-k];
        }
        m[s]++;
        check(root->left,k,c,s,m);
        check(root->right,k,c,s,m);
        m[s]--;
    }
  
    int sumK(Node *root,int k)
    {
         long long c=0;
         unordered_map<long long,long long> m;
         check(root,k,c,0,m);
         return c;
    }
int main(){

return 0;
}