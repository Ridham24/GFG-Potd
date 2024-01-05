int TotalWays(int n)
	{
	    if(n==1)
	    return 4;
	    if(n==2)
	    return 9;
	    long long a=2,b=3;
	    long long c=0;
	    for(int i=3;i<=n;i++)
	    {
	        c=(a+b)%mod;
	        a=b;
	        b=c;
	    }
	    return (c*c)%mod;
	}