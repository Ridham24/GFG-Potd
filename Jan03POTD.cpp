int smallestSubstring(string S) {
        int z=0,o=0,t=0;
        int i=0,j=0,mini=1e9;
        while(j<S.length())
        {
            if(S[j]=='0')
            z++;
            else if(S[j]=='1')
            o++;
            else
            t++;
            while(z>0&&o>0&&t>0)
            {
                mini=min(j-i+1,mini);
                if(S[i]=='0')
                z--;
                else if(S[i]=='1')
                o--;
                else
                t--;
                i++;
            }
            j++;
        }
        if(mini==1e9)
        return -1;
        return mini;
    }