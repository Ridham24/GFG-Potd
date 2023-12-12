#include<bits/stdc++.h>
using namespace std;
int check(int i,int j,vector<vector<int>>& m,vector<vector<int>>& dp)
    {
        if(j>=m[0].size())
        return 0;
        if(dp[i][j]!=-1)
        return dp[i][j];
        int a=check(i,j+1,m,dp)+m[i][j];
        if(i>0)
        a=max(a,check(i-1,j+1,m,dp)+m[i][j]);
        if(i<m.size()-1)
        a=max(a,check(i+1,j+1,m,dp)+m[i][j]);
        return dp[i][j]=a;
    }

    int maxGold(int n, int m, vector<vector<int>> M)
    {
        int maxi=0;
        vector<vector<int>> dp(n,vector<int> (m,-1));
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,check(i,0,M,dp));
        }
        return maxi;
    }
int main()
{
    return 0;
}