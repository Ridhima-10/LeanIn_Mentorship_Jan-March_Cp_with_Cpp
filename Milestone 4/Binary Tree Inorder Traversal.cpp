void inordertraversal(TreeNode *root,vector<int> &inorder)
{
    if(root==NULL)
        return;
    
    inordertraversal(root->left,inorder);
    inorder.push_back(root->data);
    inordertraversal(root->right,inorder);
    
}


vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    
    vector<int> inorder;
    inordertraversal(root,inorder);
    
    return inorder;
}
