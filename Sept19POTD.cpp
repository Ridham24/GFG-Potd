#include<bits/stdc++.h>
using namespace std;
unsigned int getFirstSetBit(int n)
    {
        // Your code here
        if(n==0)
        return 0;
        int c=1;
        while(n>0)
        {
            if((n&1)==1)
            return c;
            c++;
            n/=2;
        }
        return c;
    }
int main(){

return 0;
}