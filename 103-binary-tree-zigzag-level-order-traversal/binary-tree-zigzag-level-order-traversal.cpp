class Solution {
public:

void onlevel (TreeNode* root, int curr, int level,vector<int>&v){
        if (root==NULL) return;
        if(curr==level){
            v.push_back(root->val);
            return;
        }
        onlevel (root->left,curr+1,level,v);
        onlevel (root->right,curr+1,level,v);
    }

    void enlevel (TreeNode* root, int curr, int level,vector<int>&v){
        if (root==NULL) return;
        if(curr==level){
            v.push_back(root->val);
            return;
        }
        enlevel (root->right,curr+1,level,v);
        enlevel (root->left,curr+1,level,v);
        
    }

    int levels (TreeNode* root){
        if(root==NULL) return 0;
        return 1+ max(levels(root->left),levels(root->right));
    }

    void lorder(TreeNode* root,vector<vector<int>> & ans){
        int n =levels(root);
        for(int i=1;i<=n;i++){
            vector <int > v;
            if(i%2!=0)
            {onlevel(root,1,i,v);
            ans.push_back(v);}

            else{enlevel(root,1,i,v);
            ans.push_back(v);}
        }

    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        lorder(root,ans);
        return ans;
    }
};