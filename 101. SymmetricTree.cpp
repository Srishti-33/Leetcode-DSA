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
    bool isSymmetrichelper(TreeNode* l1, TreeNode* l2) {
        if(!l1 && !l2) {
            return true;
        }
        if(!l1 || !l2) {
            return false;
        }
        if(l1 -> val == l2 -> val) {
            return isSymmetrichelper(l1 -> left, l2-> right) && isSymmetrichelper(l1-> right,l2-> left);
        }
        else {
            return false;
        }
    }

    bool isSymmetric(TreeNode* root) {
      return isSymmetrichelper(root -> left, root -> right);
    }
};
