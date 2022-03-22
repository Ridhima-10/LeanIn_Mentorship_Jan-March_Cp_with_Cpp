void preordertraversal(TreeNode *root,vector<int> &preorder)
{
    if(root==NULL)
        return;
    
    
    preorder.push_back(root->val);
    preordertraversal(root->left,preorder);
    
    preordertraversal(root->right,preorder);
    
}

vector<int> preorderTraversal(TreeNode* root)
{
    // Write your code here	
    vector<int> preorder;
    preordertraversal(root,preorder);
    
    return preorder;
}
