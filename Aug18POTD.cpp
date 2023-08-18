#include<bits/stdc++.h>
using namespace std;
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int arr[], int n){
        // Code here
        vector<int> v;
        int m=-1e9;
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]>=m)
            {
                v.push_back(arr[i]);
                m=arr[i];
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
int main(){

return 0;
}