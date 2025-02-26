class Solution {
public:

    void nlevel (TreeNode* root, int curr, int level,vector<int>&v){
        if (root==NULL) return;
        if(curr==level){
            v.push_back(root->val);
            return;
        }
        nlevel (root->left,curr+1,level,v);
        nlevel (root->right,curr+1,level,v);
    }

    int levels (TreeNode* root){
        if(root==NULL) return 0;
        return 1+ max(levels(root->left),levels(root->right));
    }

    void lorder(TreeNode* root,vector<vector<int>> & ans){
        int n =levels(root);
        for(int i=1;i<=n;i++){
            vector <int > v;
            nlevel(root,1,i,v);
            ans.push_back(v);
        }

    }

    vector<vector<int>> levelOrder(TreeNode* root) {
         vector<vector<int>> ans;
         lorder(root,ans);
         return ans;
    }


};