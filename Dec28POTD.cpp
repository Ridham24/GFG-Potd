bool wild(int i,int j,string& p,string& s,int& x,vector<vector<int>>& dp)
    {
        if(j==s.length())
        {
            if(i==x)
            return true;
            return false;
        }
        if(i==p.length())
        return false;
        if(dp[i][j]!=-1)
        {
            if(dp[i][j]==1)
            return true;
            return false;
        }
        if(p[i]=='?')
        {
            if(wild(i+1,j+1,p,s,x,dp))
            dp[i][j]=1;
            else
            dp[i][j]=0;
            if(dp[i][j]==1)
            return true;
            return false;
        }
        else if(p[i]=='*')
        {
            if(wild(i,j+1,p,s,x,dp)||wild(i+1,j+1,p,s,x,dp)||wild(i+1,j,p,s,x,dp))
            dp[i][j]=1;
            else
            dp[i][j]=0;
            if(dp[i][j]==1)
            return true;
            return false;
        }
        else
        {
            bool o;
            if(p[i]==s[j])
            o=wild(i+1,j+1,p,s,x,dp);
            else
            o=false;
            if(o)
            dp[i][j]=1;
            else
            dp[i][j]=0;
            if(dp[i][j]==1)
            return true;
            return false;
        }
    }

    bool match(string p, string s)
    {
        int x=p.length();
        for(int i=p.length()-1;i>=0;i--)
        {
            if(p[i]!='*')
            break;
            x=i;
        }
        vector<vector<int>> dp(p.size(),vector<int>(s.size(),-1));
        if(wild(0,0,p,s,x,dp))
        return 1;
        return 0;
    }