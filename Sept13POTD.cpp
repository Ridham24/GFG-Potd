#include<bits/stdc++.h>
using namespace std;
string findLargest(int n, int s){
        // code here
        if(s==0&&n>1)
        return "-1";
        int g=s;
        string k="";
        while(n>0)
        {
            if(s>=9)
            {
                s-=9;
                k.push_back('9');
                n--;
            }
            else
            {
                k.push_back(s+'0');
                s=0;
                n--;
            }
        }
        for(auto it:k)
        g-=it-'0';
        if(g!=0)
        return "-1";
        return k;
    }
int main(){

return 0;
}