#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
  int fib(int n,vector<int>& dp)
  {
      if(n<=1)
      return n;
      if(dp[n]!=-1)
      return dp[n];
      dp[n]=(fib(n-1,dp)%mod+fib(n-2,dp)%mod)%mod;
      return dp[n];
  }
  
    int nthFibonacci(int n){
        // code here
        vector<int> dp(n+1,-1);
        return fib(n,dp);
    }
int main(){

return 0;
}