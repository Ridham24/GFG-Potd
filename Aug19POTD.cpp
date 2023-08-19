#include<bits/stdc++.h>
using namespace std;
vector<int> subarraySum(vector<int>nums, int n, long long k)
    {
        long long s=nums[0];
        int i=0,j=0;
        while(j<n)
        {
            if(k>s)
            {
                j++;
                s+=nums[j];
                continue;
            }
            else if(k<s)
            {
                s-=nums[i];
                i++;
                if(i>j)
                {
                    j=i;
                    s=nums[i];
                }
                continue;
            }
            else{
                return {i+1,j+1};
            }
        }
        return {-1};
    }
int main(){

return 0;
}