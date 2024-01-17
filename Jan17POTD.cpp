void all(int i,vector<int> v,vector<vector<int>>&ans)
    {
        if(i>=v.size())
        {
            ans.push_back(v);
            return;
        }
        for(int j=i;j<v.size();j++)
        {
            if(v[i]==v[j]&&j!=i)
            continue;
            swap(v[i],v[j]);
            all(i+1,v,ans);
        }
    }
  
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        all(0,arr,ans);
        return ans;
    }