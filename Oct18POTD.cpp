#include<bits/stdc++.h>
using namespace std;
vector<int> eventualSafeNodes(int V, vector<int> ad[]) {
        // code here
        vector<int> adj[V];
        for(int i=0;i<V;i++)
        {
            for(auto it:ad[i])
            {
                adj[it].push_back(i);
            }
        }
        vector<int> outdegree(V,0);
        for(int i=0;i<V;i++)
        {
            for(auto it:adj[i])
            {
                outdegree[it]++;
            }
        }
        queue<int> q;
        for(int i=0;i<V;i++)
        {
            if(outdegree[i]==0)
            q.push(i);
        }
        vector<int> ans;
        while(q.size()!=0)
        {
            int i=q.front();
            q.pop();
            ans.push_back(i);
            for(auto it:adj[i])
            {
                outdegree[it]--;
                if(outdegree[it]==0)
                q.push(it);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
int main(){

return 0;
}