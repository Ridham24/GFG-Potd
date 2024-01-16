int mini(int m,int n,vector<vector<int>> &dp)
    {
        if(n==0)
        return 1;
        if(m==0)
        return 0;
        if(dp[m][n]!=-1)
        return dp[m][n];
        return dp[m][n]=mini(m-1,n,dp)+mini(m/2,n-1,dp);
    }

    int numberSequence(int m, int n){
        vector<vector<int>> dp(m+1,vector<int>(n+1,-1));
        return mini(m,n,dp);
    }