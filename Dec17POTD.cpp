#include<bits/stdc++.h>
using namespace std;
int findMaxSum(int *arr, int n) {
	    pair<int,int> p;
	    p={0,0};
	    for(int i=0;i<n;i++)
	    {
	        p={p.second+arr[i],max(p.first,p.second)};
	    }
	    return max(p.first,p.second);
	}
int main(){

return 0;
}