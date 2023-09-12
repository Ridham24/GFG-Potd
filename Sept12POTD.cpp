#include<bits/stdc++.h>
using namespace std;
int isPerfectNumber(long long N) {
        // code here
        long long s=sqrt(N),c=0;
        for(long long i=1;i<=s;i++)
        {
            if(N%i==0)
            {
                c+=i;
                c+=N/i;
            }
        }
        if(s==(double)sqrt(N))
        c-=s;
        if(c==2*N)
        return 1;
        return 0;
    }
int main(){

return 0;
}