#include<bits/stdc++.h>
using namespace std;
int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        sum1+=a[i];
        for(int i=0;i<n;i++)
        {
            if(sum2==(sum1-a[i]-sum2))
            return i+1;
            sum2+=a[i];
        }
        return -1;
    }
int main(){

return 0;
}