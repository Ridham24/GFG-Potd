#include<bits/stdc++.h>
using namespace std;
void dfs(int i, int j, vector<vector<int>>& mat)
    {
        mat[i][j]=-1;
        if(i>0&&mat[i-1][j]==1)
        dfs(i-1,j,mat);
        if(i<mat.size()-1&&mat[i+1][j]==1)
        dfs(i+1,j,mat);
        if(j>0&&mat[i][j-1]==1)
        dfs(i,j-1,mat);
        if(j<mat[0].size()-1&&mat[i][j+1]==1)
        dfs(i,j+1,mat);
    }
  
    int numberOfEnclaves(vector<vector<int>> &mat) {
        // Code here
        for(int i=0;i<mat[0].size();i++)
        {
            if(mat[0][i]==1)
            dfs(0,i,mat);
        }
        for(int i=0;i<mat[0].size();i++)
        {
            if(mat[mat.size()-1][i]==1)
            dfs(mat.size()-1,i,mat);
        }
        for(int i=0;i<mat.size();i++)
        {
            if(mat[i][0]==1)
            dfs(i,0,mat);
        }
        for(int i=0;i<mat.size();i++)
        {
            if(mat[i][mat[0].size()-1]==1)
            dfs(i,mat[0].size()-1,mat);
        }
        int c=0;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                c++;
            }
        }
        return c;
    }
int main(){

return 0;
}