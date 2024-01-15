int maxi(int i,int t,vector<int>&cost,vector<vector<int>>& dp)
    {
        if(i>=cost.size())
        return 0;
        if(dp[i][t]!=-1)
        return dp[i][t];
        int a=maxi(i+1,t,cost,dp);
        if(t>=cost[i])
        a=max(a,maxi(i+1,t-cost[i]+(9*cost[i])/10,cost,dp)+1);
        return dp[i][t]=a;
    }
    
    int max_courses(int n, int total, vector<int> &cost)
    {
        vector<vector<int>> dp(n,vector<int>(total+1,-1));
        return maxi(0,total,cost,dp);
    }