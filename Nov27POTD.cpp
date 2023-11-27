#include<bits/stdc++.h>
using namespace std;
class DisjointSet {
public:

    vector<int> rank, parent, size;

    DisjointSet(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        for (int i = 1; i <= n; i++) parent[i] = i;
    }

    void unionByRank(int x, int y) {

        int par_x = findPar(x);
        int par_y = findPar(y);

        if (par_x == par_y) return;

        if (rank[par_x] < rank[par_y]) {
            parent[par_x] = par_y;
        } else if (rank[par_y] < rank[par_x]) {
            parent[par_y] = par_x;
        } else {
            parent[par_x] = par_y;
            rank[par_y]++;
        }
    }

    void unionBySize(int x, int y) {

        int par_x = findPar(x);
        int par_y = findPar(y);

        if (par_x == par_y) return;

        if (size[par_x] < size[par_y]) {
            parent[par_x] = par_y;
            size[par_y] += size[par_x];
        } else {
            parent[par_y] = par_x;
            size[par_x] += size[par_y];
        }
    }

    int findPar(int x) {

        if (parent[x] == x) return x;

        return parent[x] = findPar(parent[x]);

    }

};

    
	int detectCycle(int V, vector<int>adj[])
	{
	    DisjointSet ds(V);
	    for(int i=0;i<V;i++)
	    {
	        for(auto it:adj[i])
	        {
	            if(ds.findPar(i)==ds.findPar(it))
	            return true;
	            if(it<i)
	            ds.unionByRank(i,it);
	        }
	    }
	    return false;
	}
int main()
{
    return 0;
}