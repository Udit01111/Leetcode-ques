/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
         if (root == NULL) return 0; // Base case: Empty tree has depth 0

        int leftDepth = maxDepth(root->left);  // Recursive call on left subtree
        int rightDepth = maxDepth(root->right); // Recursive call on right subtree

        return 1 + max(leftDepth, rightDepth); // Add 1 for the current node
        
    }
};