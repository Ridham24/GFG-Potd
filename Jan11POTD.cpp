string removeKdigits(string s, int k) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(st.size()==0)
            st.push(s[i]);
            else
            {
                if(s[i]>=st.top()||k==0)
                st.push(s[i]);
                else
                {
                    while(st.size()>0&&st.top()>s[i]&&k>0)
                    {
                        st.pop();
                        k--;
                    }
                    st.push(s[i]);
                }
            }
        }
        while(k--)
        st.pop();
        if(st.size()==0)
        return "0";
        s="";
        while(st.size()>0)
        {
            s.push_back(st.top());
            st.pop();
        }
        reverse(s.begin(),s.end());
        int x=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            x++;
            else
            break;
        }
        s=s.substr(x,s.length()-x);
        if(s.length()==0)
        return "0";
        return s;
    }