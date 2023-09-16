#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
    long long count(int n,vector<long long>& dp)
    {
        if(n==0)
        return 1;
        long long l=0,r=0,s=0;
        if(dp[n]!=-1)
        return dp[n];
        if(n>0)
        l=count(n-1,dp);
        if(n>1)
        r=count(n-2,dp);
        if(n>2)
        s=count(n-3,dp);
        return dp[n]=(l+r+s)%mod;
    }
    
    long long countWays(int n)
    {
        vector<long long> dp(n+1,-1);
        return count(n,dp);
    }
int main(){

return 0;
}