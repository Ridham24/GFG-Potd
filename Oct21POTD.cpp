#include<bits/stdc++.h>
using namespace std;
long long sumOfDivisors(int n)
    {
        // Write Your Code here
        long long int s=0;
        for(int i=1;i<=n;i++)
        {
            int d=n/i;
            s+=d*i;
        }
        return s;
    }
int main()
{
    return 0;
}