#include<bits/stdc++.h>
using namespace std;
int countX(int L, int R, int X) {
        int c=0;
        for(int i=L+1;i<R;i++)
        {
            int x=i;
            while(x>0)
            {
                if(x%10==X)
                c++;
                x/=10;
            }
        }
        return c;
    }
int main(){

return 0;
}