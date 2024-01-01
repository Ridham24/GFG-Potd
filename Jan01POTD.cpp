bool canPair(vector<int> nums, int k) {
        for(int i=0;i<nums.size();i++)
        nums[i]%=k;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        m[nums[i]]++;
        for(int i=0;i<nums.size();i++)
        {
            if(m[nums[i]]==0)
            continue;
            if(nums[i]==0)
            {
                if(m[0]>=2)
                m[0]-=2;
                else
                return false;
            }
            else
            {
                m[nums[i]]--;
                if(m.find(k-nums[i])==m.end()||m[k-nums[i]]==0)
                return false;
                else
                m[k-nums[i]]--;
            }
        }
        return true;
    }