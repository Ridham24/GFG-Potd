#include<bits/stdc++.h>
using namespace std;
int FindMaxSum(int arr[], int n)
    {
        pair<int,int> p=make_pair(0,0);
        for(int i=0;i<n;i++)
        {
            int a,b;
            a=p.first;
            b=p.second;
            p.second=arr[i]+a;
            p.first=max(a,b);
        }
        return max(p.first,p.second);
    }
int main()
{
    return 0;
}