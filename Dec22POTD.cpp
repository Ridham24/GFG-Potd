class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<pair<int,pair<int,int>>> v;
        for(int i=0;i<N;i++)
        {
            v.push_back({F[i],{S[i],i+1}});
        }
        sort(v.begin(),v.end());
        int a=-1;
        vector<int> c;
        for(int i=0;i<N;i++)
        {
            if(v[i].second.first>a)
            {
                c.push_back(v[i].second.second);
                a=v[i].first;
            }
        }
        sort(c.begin(),c.end());
        return c;
    }
};