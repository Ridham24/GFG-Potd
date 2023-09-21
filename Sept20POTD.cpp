#include<bits/stdc++.h>
using namespace std;
vector <int> rotate (int n, int d)
        {
            //code here.
            unsigned short a,b;
            unsigned short y=n;
            d%=16;
            a=(y<<d|y>>(16-d));
            b=(y>>d|y<<(16-d));
            return {a,b};
        }
int main()
{
    return 0;
}