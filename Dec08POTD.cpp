#include<bits/stdc++.h>
using namespace std;
bool pri(int n)
    {
        for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
        return false;
        return true;
    }
    
    int minNumber(int arr[],int N)
    {
        int s=0;
        for(int i=0;i<N;i++)
        s+=arr[i];
        if(s==1)
        return 1;
        for(int i=s;;i++)
        {
            if(pri(i))
            return i-s;
        }
    }
int main(){

return 0;
}