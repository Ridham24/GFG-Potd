#include<bits/stdc++.h>
using namespace std;
ll count(int i,int n,int p,vector<vector<ll>>& dp)
	{
	    if(i>=n)
	    return 1;
	    ll a=0;
	    if(dp[i][p]!=-1)
	    return dp[i][p];
	    if(p==1)
	    {
	        a=count(i+1,n,0,dp);
	    }
	    else
	    {
	        a=count(i+1,n,0,dp)+count(i+1,n,1,dp);
	    }
	    a%=mod;
	    return dp[i][p]=a;
	}
	
	ll countStrings(int n) {
	    vector<vector<ll>> dp(n,vector<ll>(2,-1));
	    return count(0,n,0,dp);
	}
int main(){

return 0;
}