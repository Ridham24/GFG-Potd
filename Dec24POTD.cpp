int buyMaximumProducts(int n, int k, int price[]){
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        v.push_back({price[i],i+1});
        sort(v.begin(),v.end());
        int c=0;
        for(int i=0;i<n;i++)
        {
            int x=k/v[i].first;
            k-=min(x,v[i].second)*v[i].first;
            c+=min(x,v[i].second);
        }
        return c;
    }