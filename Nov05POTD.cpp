#include<bits/stdc++.h>
using namespace std;
vector<int> topK(vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int> a;
        for(int i=0;i<nums.size();i++)
        a[nums[i]]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> b;
        for(auto i:a)
        {
            if(pq.size()<k)
            pq.push({i.second,i.first});
            else
            {
                if(pq.top().first<i.second||(pq.top().first==i.second&&pq.top().second<i.first))
                {
                    pq.pop();
                    pq.push({i.second,i.first});
                }
            }
        }
        while(pq.size()>0)
        {
            b.push_back(pq.top().second);
            pq.pop();
        }
        reverse(b.begin(),b.end());
        return b;
    }
int main(){

return 0;
}