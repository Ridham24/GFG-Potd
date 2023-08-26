#include<bits.stdc++.h>
using namespace std;
int longestKSubstr(string s, int k) {
    // your code here
    int c=0,m=-1;
    int a[26]={0};
    int i=0,j=0;
    while(j<s.length())
    {
        if(c>k)
        {
            a[s[i]-'a']--;
            if(a[s[i]-'a']==0)
            c--;
            i++;
        }
            a[s[j]-'a']++;
            if(a[s[j]-'a']==1)
            c++;
            j++;
            
        if(c==k)
        m=max(m,j-i);
    }
    if(c==k)
    m=max(m,j-i);
    return m;
    }
int main()
{
    return 0;
}