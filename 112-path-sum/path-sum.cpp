class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root==NULL){return false;}

        if(root->left==NULL && root->right==NULL){
            if(root->val==targetSum){return true;}
            return false;
        }

        bool left= hasPathSum(root->left, targetSum - root->val);
        bool right= hasPathSum(root->right, targetSum - root->val);

        return left || right ;
    }
};