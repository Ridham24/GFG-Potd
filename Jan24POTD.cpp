bool dfs(unordered_map<int, vector<int>>&graph, vector<bool>&vis, int u, int parent){
        vis[u] = true;
        
        for(auto &v : graph[u]){
            if(!vis[v]){
                if(dfs(graph, vis, v, u))   return true;
            }else if(v != parent)   return true;
        }
        
        return false;
    }
    int isTree(int n, int m, vector<vector<int>> &adj) {
        // code here
        unordered_map<int, vector<int>>graph;
        for(vector<int>&edge : adj)
        {
            int u = edge[0];
            int v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<bool>vis(n, false);
        if(dfs(graph, vis, 0, -1))    
        return false;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])     
            return false;
        }
        return true;
    }