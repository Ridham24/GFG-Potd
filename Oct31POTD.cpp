#include<bits/stdc++.h>
using namespace std;
void pushZerosToEnd(int arr[], int n) {
	    int i=0,j=0;
	    while(i<n&&j<n)
	    {
	        while(arr[j]==0&&j<n)
	        j++;
	        while(arr[i]!=0&&i<n)
	        i++;
	        if(i>=n||j>=n)
	        break;
	        if(i<j)
	        swap(arr[i],arr[j]);
	        else
	        i=j;
	        j++;
	    }
	}
int main(){

return 0;
}