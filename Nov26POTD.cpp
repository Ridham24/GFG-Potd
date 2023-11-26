#include<bits/stdc++.h>
using namespace std;
void c1(int N,vector<int>& v)
    {
        if(N<=0) 
        {
            v.push_back(N);
            return;
        }
        v.push_back(N);
        c1(N-5, v);
        v.push_back(N);
    }

    vector<int> pattern(int N){
        vector<int> v;
        c1(N,v);
        return v;
    }
int main()
{
    return 0;
}