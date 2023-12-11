#include<bits/stdc++.h>
using namespace std;
long maximumSumSubarray(int k, vector<int> &Arr , int N){
        long maxi=0,s=0;
        int i=0,j=k-1;
        while(i<=j)
        {
            s+=Arr[i];
            i++;
        }
        maxi=s,i=0,j=k;
        while(j<N)
        {
            s+=Arr[j];
            s-=Arr[i];
            i++;
            j++;
            maxi=max(maxi,s);
        }
        return maxi;
    }
int main(){

return 0;
}