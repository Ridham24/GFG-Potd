int longSubarrWthSumDivByK(int nums[], int n, int k)
	{
	    int s=0;
        for(int i=0;i<n;i++)
        {
            s+=nums[i];
            nums[i]=s;
        }
        vector<int>v(n+1);
        for(int i=0;i<n;i++)
        {
            nums[i]%=k;
            if(nums[i]<0)
            nums[i]+=k;
            v[i+1]=nums[i];
        }
        unordered_map<int,int> m;
        s=0;
        for(int i=0;i<n+1;i++)
        {
            if(m.find(v[i])==m.end())
            m[v[i]]=i;
            else
            s=max(s,i-m[v[i]]);
        }
        return s;
	}