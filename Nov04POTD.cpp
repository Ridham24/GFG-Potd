#include<bits/stdc++.h>
using namespace std;
int transitionPoint(int arr[], int n) {
        int i=lower_bound(arr, arr + n, 1)-arr;
        if(i==n)
        return -1;
        return i;
    }
int main(){

return 0;
}