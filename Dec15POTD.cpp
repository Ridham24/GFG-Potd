#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
class Solution{
	public:
	
	    int check(int i,int n,vector<int>& dp)
	    {
	        if(i==n)
	        return 1;
	        if(dp[i]!=-1)
	        return dp[i];
	        int a=check(i+1,n,dp);
	        if(n-i>1)
	        a=(a+check(i+2,n,dp))%mod;
	        return dp[i]=a%mod;
	    }
	
		int nthPoint(int n){
		    vector<int> dp(n,-1);
		    return check(0,n,dp);
		}
};
int main(){

return 0;
}