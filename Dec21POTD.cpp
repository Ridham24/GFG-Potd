int minCandy(int N, vector<int> &r) {
        vector<int> v(N,1);
        for(int i=0;i<N-1;i++)
        {
            if(r[i]<r[i+1])
            v[i+1]=v[i]+1;
        }
        for(int i=N-1;i>0;i--)
        {
            if(r[i]<r[i-1])
            v[i-1]=max(v[i]+1,v[i-1]);
        }
        int s=0;
        for(int i=0;i<N;i++)
        s+=v[i];
        return s;
    }