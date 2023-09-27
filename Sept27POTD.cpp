#include<bits/stdc++.h>
using namespace std;
vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
        int i=0,j=m-1;
        int mini=1e9;
        vector<int> p={0,0};
        while(i<n&&j>=0)
        {
            int sum=arr[i]+brr[j];
            if(mini>abs(x-sum))
            {
                mini=abs(x-sum);
                p[0]=arr[i];
                p[1]=brr[j];
            }
            if(sum>x)
            j--;
            else
            i++;
        }
        return p;
    }
int main(){

return 0;
}