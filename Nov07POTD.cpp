#include<bits/stdc++.h>
using namespace std;
vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        int s1=0,s2=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            s1+=matrix[i][j];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            s2+=matrix[i][j];
        }
        return {s1,s2};
    }
int main(){

return 0;
}