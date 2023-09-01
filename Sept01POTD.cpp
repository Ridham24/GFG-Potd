#include<bits/stdc++.h>
using namespace std;
void printCorner(Node *root)
{

// Your code goes here
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    vector<vector<int>> v;
    vector<int> k;
    vector<int> l;
    while(q.size()!=0)
    {
        Node* temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            v.push_back(k);
            k=l;
            if(q.size()!=0)
            q.push(NULL);
        }
        else
        {
            k.push_back(temp->data);
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i].size()==1)
        cout<<v[i][0]<<" ";
        else
        {
            cout<<v[i][0]<<" ";
            cout<<v[i][v[i].size()-1]<<" ";
        }
    }
}
int main(){

return 0;
}