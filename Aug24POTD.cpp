#include<bits/stdc++.h>
using namespace std;
    string multiplyStrings(string s, string t) {
       //Your code here
       int x=-1,peh=0,dus=0;
       if(s[0]=='-')
       {
           peh=1;
           s.erase(0,1);
       }
       if(t[0]=='-')
       {
           dus=1;
           t.erase(0,1);
       }
       for(int i=0;i<s.length();i++)
       {
           if(s[i]!='0')
           break;
           x=i;
       }
       if(x!=-1)
       s.erase(0,x+1);
       x=-1;
       for(int i=0;i<t.length();i++)
       {
           if(t[i]!='0')
           break;
           x=i;
       }
       if(x!=-1)
       t.erase(0,x+1);
       vector<int> v(s.length()+t.length(),0);
       if(s.length()==0||t.length()==0)
       return "0";
        for(int i=t.length()-1;i>=0;i--)
        {
            for(int j=s.length()-1;j>=0;j--)
            {
                int a,b;
                a=t[i]-'0';
                b=s[j]-'0';
                v[i+j+1]+=a*b;
            }
        }
        int c=0;
        string l="";
        for(int i=v.size()-1;i>=0;i--)
        {
            v[i]+=c;
            c=v[i]/10;
            x=v[i]%10;
            char ct=x+'0';
            l.push_back(ct);
        }
        for(int i=l.length()-1;i>=0;i--)
        {
            if(l[i]!='0')
            break;
            l.pop_back();
        }
        if((peh+dus)==1)
        l.push_back('-');
        reverse(l.begin(),l.end());
        return l;
    }
int main(){

return 0;
}