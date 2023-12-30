vector<string> winner(string arr[],int n)
    {
        unordered_map<string,int> m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        string ans="";
        int mi=0;
        for(auto it:m)
        {
            if(it.second>mi)
            {
                mi=it.second;
                ans=it.first;
            }
            else if(it.second==mi)
            ans=min(ans,it.first);
        }
        return {ans,to_string(mi)};
    }