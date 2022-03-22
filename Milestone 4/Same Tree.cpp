bool identicalTrees(BinaryTreeNode<int>* root1, BinaryTreeNode<int>* root2) {
    // Write your code here. 
    
    bool leftans;
    bool rightans;
    
    if(root1==NULL && root2==NULL)
       return true;
    
    if(root1==NULL || root2==NULL)
        return false;
    
    
    
    
    if(root1->data !=root2->data)
        return false;
    
    else
    {
        leftans=identicalTrees(root1->left,root2->left);
        rightans=identicalTrees(root1->right,root2->right);
    }
    
    if(leftans && rightans)
    	return true;
    else
        return false;
}
