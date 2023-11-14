#include<bits/stdc++.h>
using namespace std;
bool areRotations(string s,string goal)
    {
        // Your code here
        int n=s.length();
        while(n--)
        {
            char x=s[0];
            s.erase(0,1);
            s+=x;
            if(s==goal)
            return true;
        }
        return false;
    }
int main(){

return 0;
}