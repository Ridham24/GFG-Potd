#include<bitset>/stdc++.h>
using namespace std;
int isPalindrome(string S)
	{
	    // Your code goes here
	    for(int i=0;i<S.length();i++)
	    {
	        if(S[i]!=S[S.length()-i-1])
	        return 0;
	    }
	    return 1;
	}
int main(){

    return 0;
}