#include<bits/stdc++.h>
using namespace std;
int combo(int i,int sum,int arr[],int n,vector<vector<int>>& dp)
	{
	    if(sum<0)
	    return 0;
	    if(i>=n)
	    {
	        if(sum==0)
	        return 1;
	        return 0;
	    }
	    if(dp[i][sum]!=-1)
	    return dp[i][sum];
	    return dp[i][sum]=(combo(i+1,sum-arr[i],arr,n,dp)+combo(i+1,sum,arr,n,dp))%mod;
	}
	
	long long perfectSum(int arr[], int n, int sum)
	{
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
        return combo(0,sum,arr,n,dp);
	}
int main(){

return 0;
}