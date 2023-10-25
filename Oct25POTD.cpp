#include<bits/stdc++.h>
using namespace std;
int knapSack(int n, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>> dp(n+1,vector<int>(W+2,0));
       for(int index=n-1;index>=0;index--)
       {
           for(int j=0;j<=W;j++)
           {
               int l=0,r=0;
               if(j>=wt[index])
                l=dp[index][j-wt[index]]+val[index];
                r=dp[index+1][j];
                dp[index][j]=max(l,r);
           }
       }
       return dp[0][W];
    }
int main(){

return 0;
}