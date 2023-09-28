#include<bits/stdc++.h>
using namespace std;
void convertToWave(int n, vector<int>& nums){
        
        // Your code here
        int i=0,j=1;
        while(j<n)
        {
            swap(nums[i],nums[j]);
            i+=2;
            j+=2;
        }
    }
int main(){

return 0;
}