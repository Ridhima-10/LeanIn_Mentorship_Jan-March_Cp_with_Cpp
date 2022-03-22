void postorder(TreeNode* root,vector<int> &ans)
{
    if(root==NULL)
    {
        //ans.push_back(-1);
        //cout<<"hi"<<endl;
        return;
    }
    
    postorder(root->left,ans);
    postorder(root->right,ans);
    ans.push_back(root->val);
    
}

vector<int> postorderTraversal(TreeNode* root)
{
    // Write your code here	
     vector<int> ans;
     postorder(root,ans);    
    return ans;
}
