#include<bits.stdc++.h>
using namespace std;
bool areIsomorphic(string s, string t)
    {
        
        // Your code here
                unordered_map<char,char> m;
        string s1=s,t1=t;
        for(int i=0;i<s.length();i++)
        {
            if(m.find(s[i])==m.end())
            {
                m[s[i]]=t[i];
                s[i]=t[i];
            }
            else 
            s[i]=m[s[i]];
        }
        if(s!=t)
        return false;
        m.clear();
        s=s1,t=t1;
        for(int i=0;i<t.length();i++)
        {
            if(m.find(t[i])==m.end())
            {
                m[t[i]]=s[i];
                t[i]=s[i];
            }
            else 
            t[i]=m[t[i]];
        }
        if(s==t)
        return true;
        else
        return false;

        
    }
int main()
{
    return 0;
}