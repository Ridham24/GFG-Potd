class Solution
{
    public:
    
    void check(Node* root,vector<vector<int>>& ans,vector<int>& v,int s,int sum)
    {
        if(sum==s)
        {
            ans.push_back(v);
        }
        if(root==NULL)
        return;
        if(root->left)
        {
            v.push_back(root->left->key);
            check(root->left,ans,v,s+root->left->key,sum);
            v.pop_back();
        }
        if(root->right)
        {
            v.push_back(root->right->key);
            check(root->right,ans,v,s+root->right->key,sum);
            v.pop_back();
        }
    }
    
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        vector<vector<int>> ans;;
        vector<int> v;
        v.push_back(root->key);
        check(root,ans,v,root->key,sum);
        return ans;
    }
};