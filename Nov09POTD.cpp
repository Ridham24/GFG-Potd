#include<bits/stdc++.h>
using namespace std;
int columnWithMaxZeros(vector<vector<int>>arr,int N){
        int x=-1,m=0,c=0;
        for(int i=0;i<N;i++)
        {
            c=0;
            for(int j=0;j<N;j++)
            {
                if(arr[j][i]==0)
                c++;
            }
            if(c>m)
            {
                m=c;
                x=i;
            }
        }
        return x;
    }
int main()
{
    return 0;
}