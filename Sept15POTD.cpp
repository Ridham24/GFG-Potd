#include<bits/stdc++.h>
using namespace std;
bool suming(int i,int sum,int arr[],int N,vector<vector<int>>& dp)
    {
        if(sum<0)
        return false;
        if(i==N)
        {
            if(sum==0)
            return true;
            return false;
        }
        if(dp[i][sum]!=-1)
        {
            if(dp[i][sum])
            return true;
            return false;
        }
        bool l,r;
        l=suming(i+1,sum-arr[i],arr,N,dp);
        r=suming(i+1,sum,arr,N,dp);
        if(l||r)
        {
            dp[i][sum]=1;
        }
        else
        dp[i][sum]=0;
        if(dp[i][sum])
        return true;
        return false;
    }

    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)
        sum+=arr[i];
        vector<vector<int>> dp(N,vector<int>(sum+1,-1));
        if(sum%2!=0)
        return 0;
        return suming(0,sum/2,arr,N,dp);
        
    }
int main(){

return 0;
}