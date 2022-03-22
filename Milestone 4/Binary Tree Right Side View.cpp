void fastright(BinaryTreeNode<int>* root,vector<int> &ans,int lvl)
{
    if(root==NULL)
        return;
    //vector<int> tempans;
    
    if(lvl==ans.size())
        ans.push_back(root->data);
       
    
    
    fastright(root->right,ans,lvl+1);
    fastright(root->left,ans,lvl+1);
    
    
}
vector<int> printRightView(BinaryTreeNode<int>* root) {
    // Write your code here.
    vector<int> ans;
    
    fastright(root,ans,0);
    return ans;
}
