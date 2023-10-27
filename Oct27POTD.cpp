#include<bits/stdc++.h>
using namespace std;
int minimumNumberOfDeletions(string S) { 
        string s1=S;
        reverse(S.begin(),S.end());
        string s2=S;
        vector<int> prev(s1.length()+1,0);
        vector<int> cur(s1.length()+1,0);
        for(int i=1;i<s1.length()+1;i++)
        {
            for(int j=1;j<s2.length()+1;j++)
            {
                if(s1[i-1]==s2[j-1])
                cur[j]=prev[j-1]+1;
                else
                cur[j]=max(prev[j],cur[j-1]);
            }
            prev=cur;
        }
        return S.length()-cur[s1.length()];
    } 
int main(){

return 0;
}