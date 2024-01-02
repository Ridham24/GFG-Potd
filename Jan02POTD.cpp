long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        vector<long long int> suf(n+1,0),v(n+1,1e9);
        for(int i=n-1;i>=0;i--)
        {
            suf[i]+=a[i]+suf[i+1];
        }
        long long maxi=-1e9;
        for(int i=n-1;i>=0;i--)
        {
            v[i]=min(suf[i+1],v[i+1]);
            if(n-i>=k)
            maxi=max(suf[i]-v[i+k-1],maxi);
        }
        return maxi;
    }