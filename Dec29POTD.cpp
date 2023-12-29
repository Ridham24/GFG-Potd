int kSubstrConcat (int n, string s, int k)
	{
	    if(n%k!=0)
	    return 0;
	    else
	    {
	        unordered_set<string> st;
	        for(int i=0;i<n;i+=k)
	        {
	            string t="";
	            for(int j=i;j<i+k;j++)
	            t.push_back(s[j]);
	            st.insert(t);
	        }
	        if(st.size()<=2)
	        return 1;
	        return 0;
	    }
	}