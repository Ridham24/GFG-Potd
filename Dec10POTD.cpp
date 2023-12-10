#include<bits/stdc++.h>
using namespace std;
bool subArrayExists(int arr[], int n)
    {
        vector<int> pre(n,0);
        int c=0;
        for(int i=0;i<n;i++)
        {
            pre[i]+=c+arr[i];
            c=pre[i];
        }
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[pre[i]]++;
            if(pre[i]==0||m[pre[i]]>1)
            return true;
        }
        return false;
    }
int main(){

return 0;
}