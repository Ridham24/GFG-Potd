#include<bits/stdc++.h>
using namespace std;
int minDist(int a[], int n, int x, int y) {
        int i=0,j=0;
        int mini=1e9;
        while(i<n&&j<n)
        {
            while(a[i]!=x&&i<n)
            i++;
            while(a[j]!=y&&j<n)
            j++;
            if(i!=n&&j!=n)
            mini=min(mini,abs(j-i));
            if(i<j)
            i++;
            else
            j++;
        }
        if(mini==1e9)
        return -1;
        return mini;
    }
int main(){

return 0;
}