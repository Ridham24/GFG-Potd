bool check(vector<int>hash,vector<pair<int,int>>&edges)
    {
        for(int i=0;i<edges.size();i++)
        {
            if(hash[edges[i].first-1]==0&&hash[edges[i].second-1]==0)
            return false;
        }
        return true;
    }
    
    void sub(int arr[], int index, 
                       vector<int> &subarr,int n,vector<pair<int, int>> &edges,vector<int>& hash,int&c)
    {
    if (index==n)
    {
      if(subarr.size()==0)
      return;
         if(check(hash,edges))
         c=min(c,(int)subarr.size());
         
    }
    else
    {
        subarr.push_back(arr[index]);
        hash[arr[index]-1]=1;
         sub(arr, index + 1, subarr,n,edges,hash,c);
         hash[arr[index]-1]=0;
        subarr.pop_back();
        sub(arr, index + 1, subarr,n,edges,hash,c);
    }
    
}
        int vertexCover(int n, vector<pair<int, int>> &edges) {
                int arr[n];
                for(int i=1;i<=n;i++)
                arr[i-1]=i;
                int c=1e9;
                vector<int> v;
                vector<int> hash(n,0);
                sub(arr,0,v,n,edges,hash,c);
                return c;
            }