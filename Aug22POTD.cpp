#include<bits/stdc++.h>
using namespace std;
int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        int s=0,t=0,m=0;
        for(int i=0;i<n;i++)
        {
            t=0;
            for(int j=0;j<n;j++)
            {
                s+=matrix[i][j];
                t+=matrix[i][j];
            }
            m=max(m,t);
        }
        for(int i=0;i<n;i++)
        {
            t=0;
            for(int j=0;j<n;j++)
            {
                t+=matrix[j][i];
            }
            m=max(m,t);
        }
        return m*n-s;
    } 
int main(){

return 0;
}