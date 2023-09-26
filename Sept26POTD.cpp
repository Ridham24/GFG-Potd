#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > fourSum(vector<int> &nums, int target) {
        // Your code goes here
        sort(nums.begin(),nums.end());
        int i=0,j=i+1,k=j+1,l=nums.size()-1;
        long long int s=0;
        
        set<vector<int>> d;
        vector <vector<int>> v;
        if(nums.size()<4)
        return v;
        while(i<j)
        {
            j=i+1;
            s+=nums[i];
            while(j<k)
            {
                k=j+1;
                s+=nums[j];
                l=nums.size()-1;
                while(k<l)
                {
                    
                    if((target-s)<(nums[k]+nums[l]))
                    l--;
                    else if((target-s)>(nums[k]+nums[l]))
                    k++;
                    else
                    {
                        d.insert({nums[i],nums[j],nums[k],nums[l]});
                     k++;
                     l--;
                        }
                }
                s=nums[i];
                j++;
            }
            s=0;
            i++;
        }
        for(auto it:d)
        v.push_back(it);
        return v;
    }
int main(){

return 0;
}