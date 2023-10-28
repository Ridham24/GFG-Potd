#include<bits/stdc++.h>
using namespace std;
int is_bleak(int n)
	{
	    // Code here.
	    int x=log2(n);
	    x=n-x-1;
	    while(x<=n)
	    {
	        if((x+__builtin_popcount(x))==n)
	        return 0;
	        x++;
	    }
	    return 1;
	}
int main()
{
    return 0;
}