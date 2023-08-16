#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
    int findCatalan(int n) 
    {
        //code here
        vector<long long> v(n+1,0);
        v[0]=1;
        v[1]=1;
        long long s=0;
        for(int i=2;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                s+=v[j]*v[i-j-1]%mod;
            }
            v[i]=s%mod;
            s=0;
        }
        return v[n];
    }
int main(){

return 0;
}