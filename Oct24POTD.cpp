#include<bits/stdc++.h>
using namespace std;
int pal(int i,int st,string s,vector<vector<int>>& dp)
    {
        if(i>=s.length())
        {
            if(st==i)
            return 0;
            return 1e9;
        }
        if(dp[i][st]!=-1)
        return dp[i][st];
        int t=1e9;
        // cout<<i<<" "<<st<<endl;
        if(possible(st,i,s))
        {
            t=pal(i+1,i+1,s,dp)+1;
        }
        t=min(t,pal(i+1,st,s,dp));
        return dp[i][st]=t;
    }
    
    bool possible(int st,int en,string s)
    {
        while(st<en)
        {
            if(s[st]!=s[en])
            return false;
            st++;
            en--;
        }
        return true;
    }

    int palindromicPartition(string s)
    {
        vector<vector<int>> dp(s.length(),vector<int>(s.length(),-1));
        return pal(0,0,s,dp)-1;
    }
int main(){

return 0;
}