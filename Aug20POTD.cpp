#include<bits/stdc++.h>
using namespace std;
int count(int arr[], int n, int x) {
	    // code here
	    int s=0,e=n-1,m=s+(e-s)/2;
	    int st=0,en=0;
	    int f=0;
	    while(s<=e)
	    {
	        if(arr[m]==x)
	        {
	            st=m;
	            e=m-1;
	            f=1;
	        }
	        else if(arr[m]>x)
	        e=m-1;
	        else
	        s=m+1;
	        m=s+(e-s)/2;
	    }
	    s=0,e=n-1,m=s+(e-s)/2;
	    while(s<=e)
	    {
	        if(arr[m]==x)
	        {
	            en=m;
	            s=m+1;;
	        }
	        else if(arr[m]>x)
	        e=m-1;
	        else
	        s=m+1;
	        m=s+(e-s)/2;
	    }
	    if(f==0)
	    return 0;
	    else
	    return (en-st+1);
	}
int main(){

return 0;
}