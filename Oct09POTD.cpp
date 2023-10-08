#include<bits/stdc++.h>
using namespace std;
int height(struct Node* node){
        // code here 
        if(node==NULL)
        return 0;
        return max(height(node->left),height(node->right))+1;
    }
int main(){

return 0;
}