#include<bits/stdc++.h>
using namespace std;
vector<ll> nthRowOfPascalTriangle(int n) {
        // code here
        vector<vector<ll>> v;
        vector<ll> k;
        v.push_back({1});
        n--;
        ll s=0;
        ll j=1;
        while(j<=n)
        {
            k.push_back(1);
            for(int i=1;i<j;i++)
            {
                s=v[j-1][i]+v[j-1][i-1];
                s=s%M;
                k.push_back(s);
            }
            k.push_back(1);
            v.push_back(k);
            k.clear();
            j++;
        }
        return v[v.size()-1];
    }
int main(){

return 0;
}