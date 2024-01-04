int singleElement(int arr[] ,int N) {
        vector<int> v(32,0);
        int h=pow(2,30);
        for(int i=0;i<N;i++)
        {
            int x=h,
                g=abs(arr[i]);
            for(int j=30;j>=0;j--)
            {
                if(g>=x)
                {
                    v[j]++;
                    g=g-x;
                }
                x/=2;
            }
        }
        for(int i=0;i<31;i++)
        {
            if(v[i]%3==1)
            v[i]=1;
            else
            v[i]=0;
        }
        h=1;
        int s=0;
        for(int i=0;i<31;i++)
        {
            if(v[i]==1)
            s+=h;
            h*=2;
        }
        h=0;
        for(int i=0;i<N;i++)
        if(arr[i]==s)
        h++;
        if(h%3==1)
        return s;
        return -1*s;
    }