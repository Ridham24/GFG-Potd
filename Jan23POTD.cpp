class Solution
{
  public:
    vector<int> findOrder(int n, int m, vector<vector<int>> pre) 
    {
        vector<int> indegree(n,0);
        for(int i=0;i<m;i++)
        {
            indegree[pre[i][0]]++;
        }
        vector<vector<int>> adj(n);
        for(int i=0;i<m;i++)
        {
            adj[pre[i][1]].push_back(pre[i][0]);
        }
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)
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
                indegree[it]--;
                if(indegree[it]==0)
                q.push(it);
            }
        }
        if(ans.size()==n)
        return ans;
        return {};
    }
};