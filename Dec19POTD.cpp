int posOfRightMostDiffBit(int m, int n)
    {
        int x=1;
        if(m==n)
        return -1;
        while(m>0&&n>0)
        {
            if(m%2!=n%2)
            return x;
            m=m>>1;
            n=n>>1;
            x++;
        }
        return x;
    }