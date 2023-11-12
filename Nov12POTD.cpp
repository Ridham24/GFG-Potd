#include<bits/stdc++.h
using namespace std;
bool isRotated(string str1, string str2)
    {
        str1.push_back(str1[0]);
        str1.push_back(str1[1]);
        if(str1.substr(2,str1.length()-2)==str2)
        return true;
        str1.pop_back();
        str1.pop_back();
        str2.push_back(str2[0]);
        str2.push_back(str2[1]);
        if(str2.substr(2,str2.length()-2)==str1)
        return true;
        return false;
    }
int main()
{
    return 0;
}