#include<bits/stdc++.h>
using namespace std;
int isPossible(int n, int arr[]) {
        // code here
        int s=0;
        for(int i=0;i<n;i++)
        {
            int h=arr[i];
            while(h>0)
            {
                s+=h%10;
                h/=10;
            }
        }
        if(s%3==0)
        return 1;
        return 0;
    }
int main(){

return 0;
}