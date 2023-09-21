#include<bits/stdc++.h>
using namespace std;
vector<int> find(int arr[], int n , int x )
    {
        // code here
        int a,b;
        a=lower_bound(arr,arr+n,x)-arr;
        b=upper_bound(arr,arr+n,x)-arr-1;
        if(a==n||arr[a]!=x||arr[b]!=x)
        {
            a=-1;
            b=-1;
        }
        return {a,b};
    }
int main(){

return 0;
}