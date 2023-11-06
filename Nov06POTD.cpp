#include<bits.stdc++.h>
using namespace std;
int oneHop(int n,int m,vector<vector<int>> &mat,int r,int c){
        int x[] = {-1,0,1,-1,1,-1,0,1};
        int y[] = {-1,-1,-1,0,0,1,1,1};
        int sum = 0;
        for(int i=0;i<8;i++){
            int nr = r+x[i];
            int nc = c+y[i];
            if(nr >=0 and nr<n and nc>=0 and nc<m)sum+=mat[nr][nc];
        }
        return sum;
    }
    int twoHop(int n,int m,vector<vector<int>> &mat,int r,int c){
        int x[] = {-2,-1,0,1,2,-2,-1,0,1,2,-2,2,-2,2,-2,2};
        int y[] = {-2,-2,-2,-2,-2,2,2,2,2,2,0,0,-1,-1,1,1};
        int sum = 0;
        for(int i=0;i<16;i++){
            int nr = r+x[i];
            int nc = c+y[i];
            if(nr >=0 and nr<n and nc>=0 and nc<m)sum+=mat[nr][nc];
        }
        return sum;
    }
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        vector<int> ans;
        for(int i=0;i<q;i++){
            int k = queries[i][0];
            int r = queries[i][1];
            int c = queries[i][2];
            if(k==1) ans.push_back(oneHop(n,m,mat,r,c));
            else  ans.push_back(twoHop(n,m,mat,r,c));
        }
        return ans;
    }
int main()
{
    return 0;
}