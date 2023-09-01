#include<bits/stdc++.h>
using namespace std;
int getCount(Node *root, int k)
    {
        //code here
        int c=1,f=0;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        while(q.size()!=0)
        {
            Node* temp=q.front();
            q.pop();
            if(temp==NULL)
            {
                if(q.size()!=0)
                q.push(NULL);
                c++;
            }
            else
            {
                if(!temp->left&&!temp->right)
                {
                    if(k>=c)
                    {
                        k-=c;
                        f++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }
        }
        return f;
    }
int main(){

return 0;
}