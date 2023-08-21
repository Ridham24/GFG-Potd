#include<bits/stdc++.h>
using namespace std;
int Count(vector<vector<int> >& matrix) {
        // Code here
        int p=0;
        vector<pair<int,int>> v={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                int c=0;
                if(matrix[i][j]==0)
                continue;
                for(int k=0;k<8;k++)
                {
                    int a,b;
                    a=v[k].first,b=v[k].second;
                    int x,y;
                    x=i+a;
                    y=j+b;
                    if(x>=0&&x<matrix.size()&&y>=0&&y<matrix[0].size())
                    {
                        if(matrix[x][y]==0)
                        c++;
                    }
                }
                if(c%2==0&&c!=0)
                p++;
            }
        }
        return p;
    }
int main(){

return 0;
}