#include<bits/stdc++.h>
using namespace std;
vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> v(n,0);
        v[0]=1;
        for(int i=0;i<n;i++)
        {
            if(i>0)
            v[i]+=v[i-1];
            if(i>1)
            v[i]+=v[i-2];
        }
        return v;
    }
int main(){

return 0;
}