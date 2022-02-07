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
    vector<vector<int>> v;  
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
         if(root == NULL) 
         {
             return v;
         }
        queue<TreeNode*> pendingNodes;
        pendingNodes.push(root);

        while(pendingNodes.size() != 0) 
        {
            vector<int> v1;
            TreeNode* front = pendingNodes.front();
            int q=pendingNodes.size();

            if(front  == root) {
            v1.push_back(front -> val);
            v.push_back(v1);
            v1.clear();
            }
            for(int i=0; i<q; i++) {
            if(front -> left != NULL) 
            {
                pendingNodes.push(front -> left);
                v1.push_back(front -> left -> val);
            }
            if(front -> right != NULL) 
            {
                pendingNodes.push(front -> right);
                v1.push_back(front -> right -> val);
            }
            pendingNodes.pop();
            if(pendingNodes.size() != 0) {
                front = pendingNodes.front();
            } 
            }
            if(v1.size() != 0) {
                 v.push_back(v1);
            }
            v1.clear();
        }
        return v;
    }
};