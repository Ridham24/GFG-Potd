#include<bits/stdc++.h>
using namespace std;
int minOperation(int n)
    {
        //code here.
        int c=0;
        while(n)
        {
            if(n%2==0)
            n/=2;
            else
            n--;
            c++;
        }
        return c;
    }
int main(){

return 0;
}