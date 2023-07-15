class solution{
    public:
        vector<int> rightSideView(TreeNode* root){
            vector<int> ds;
            recursive_call(root,0,ds);
            return ds;
        }

        void recursive_call(TreeNode* root,int level,vector<int> &ds){
            if(root==NULL){
                return ;
            }
            // follow preorder Traversal where we alter (ROOT , LEFT, RIGHT) to (ROOT , RIGHT, LEFT)
            if(ds.size()==level){
                ds.push_back(root->val);
            }
            recursive_call(root->right,level+1,ds);
            recursive_call(root->left,level+1,ds);
        }
}