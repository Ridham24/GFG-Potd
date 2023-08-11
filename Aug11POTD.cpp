#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long int count(int coins[], int n , int amount) {

        // code here.
        vector<vector<long long>> v(n+1,vector<long long>(amount+2,0));
        sort(coins,coins+n);
        for(int i=n;i>=0;i--)
        v[i][0]=1;
        for(int index=n-1;index>=0;index--)
        {
            for(int j=0;j<=amount;j++)
            {
                long long l=0,r=0;
                if(j>=coins[index])
                l=v[index][j-coins[index]];
                
                r=v[index+1][j];
                v[index][j]=l+r;
            }
        }
        // for(int i=0;i<=n;i++)
        // {
        //     for(int j=0;j<1001;j++)
        //     cout<<v[i][j]<<" ";
        //     cout<<endl;
        // }
        return v[0][amount];
    }
};
int main(){

return 0;
}