#include<bits/stdc++.h
using namespace std;
int rec(int index1,int index2,int n,int m,string& s1,string& s2,vector<vector<int>>& dp)
    {
        if(index1>=n)
        return 0;
        if(index2>=m)
        return 0;
        if(dp[index1][index2]!=-1)
        return dp[index1][index2];
        if(s1[index1]==s2[index2])
        return rec(index1+1,index2+1,n,m,s1,s2,dp)+1;
        int l=rec(index1+1,index2,n,m,s1,s2,dp);
        int r=rec(index1,index2+1,n,m,s1,s2,dp);
        return dp[index1][index2]=max(l,r);
    }
    
    //Function to find length of shortest common supersequence of two strings.
    int shortestCommonSupersequence(string s1, string s2, int k, int l)
    {
        //code here
        int n=s1.length(),m=s2.length();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        int f=rec(0,0,n,m,s1,s2,dp);
        return n+m-f;
    }
int main()
{
    return 0;
}