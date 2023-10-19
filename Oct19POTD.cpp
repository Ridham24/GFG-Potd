#include<bits/stdc++.h>
using namespace std;
int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    vector<int> vis(V,0);
	    queue<pair<int,int>> q;
	    q.push({0,0});
	    vis[0]=1;
	    while(q.size()!=0)
	    {
	        int l=q.front().first;
	        int i=q.front().second;
	        if(i==X)
	        return l;
	        vis[i]=1;
	        q.pop();
	        for(auto it:adj[i])
	        {
	            if(vis[it]==0)
	            {
	                q.push({l+1,it});
	            }
	        }
	    }
	    return -1;
	}
int main(){

return 0;
}