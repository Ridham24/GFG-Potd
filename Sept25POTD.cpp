#include<bits/stdc++.h>
using namespace std;
vector<int> maxCombinations(int n, int k, vector<int> &a, vector<int> &b) {
        // code here
        priority_queue<int,vector<int>,greater<int>> p;
        vector<int> v;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        for(int i=a.size()-1;i>=0;i--)
        {
            for(int j=b.size()-1;j>=0;j--)
            {
                int sum=a[i]+b[j];
                if(p.size()<k)
                p.push(sum);
                else
                {
                    if(sum>p.top())
                    {
                        p.pop();
                        p.push(sum);
                    }
                    else
                    break;
                }
            }
        }
        while(p.size()!=0)
        {
            v.push_back(p.top());
            p.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
int main(){

return 0;
}