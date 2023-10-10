#include<bits/stdc++.h>
using namespace std;
void inorder(Node* root,map<Node*,Node*>& m)
    {
        if(root==NULL)
        return;
        if(root->left)
        m[root->left]=root;
        if(root->right)
        m[root->right]=root;
        inorder(root->left,m);
        inorder(root->right,m);
    }
    
    Node* inord(Node* root,int target)
    {
        if(root==NULL)
        return NULL;
        if(root->data==target)
        return root;
        Node* t1=inord(root->left,target);
        Node* t2=inord(root->right,target);
        if(t1)
        return t1;
        if(t2)
        return t2;
    }

    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        // return the sorted vector of all nodes at k dist
        map<Node*,Node*> m;
        vector<int> v;
        inorder(root,m);
        m[root]=NULL;
        Node* t=inord(root,target);
        queue<pair<Node*,int>> q;
        q.push({t,0});
        map<Node*,int> mp;
        while(q.size()!=0)
        {
          Node* temp=q.front().first;
          int d=q.front().second;
          q.pop();
          if(temp==NULL)
          continue;
          mp[temp]=1;
          if(d==k)
          v.push_back(temp->data);
          if(temp->left)
          {
              if(mp.find(temp->left)==mp.end())
              {
                  q.push({temp->left,d+1});
              }
          }
          if(temp->right)
          {
              if(mp.find(temp->right)==mp.end())
              {
                  q.push({temp->right,d+1});
              }
          }
          if(m[temp]!=NULL)
          {
              if(mp.find(m[temp])==mp.end())
              {
                  q.push({m[temp],d+1});
              }
          }
        }
        sort(v.begin(),v.end());
        return v;
    }
int main(){

return 0;
}