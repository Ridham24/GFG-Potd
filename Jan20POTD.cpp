void mapping(Node* root,unordered_map<Node*,Node*>& m)
    {
        if(root==NULL)
        return;
        if(root->left!=NULL)
        m[root->left]=root;
        if(root->right!=NULL)
        m[root->right]=root;
        mapping(root->left,m);
        mapping(root->right,m);
    }
    
    void post(Node* root,unordered_map<Node*,Node*>& m,int& c)
    {
        if(root==NULL)
        return;
        post(root->left,m,c);
        post(root->right,m,c);
        if(m[root]==NULL)
        return;
        if(root->key>1)
        {
            c+=root->key-1;
            m[root]->key+=root->key-1;
        }
        else
        {
            c+=1-root->key;
            m[root]->key-=(1-root->key);
        }
    }
    
    int distributeCandy(Node* root)
    {
        unordered_map<Node*,Node*> m;
        m[root]==NULL;
        mapping(root,m);
        int c=0;
        post(root,m,c);
        return c;
    }