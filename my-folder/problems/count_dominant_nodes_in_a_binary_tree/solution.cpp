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
private:
    int dominantNodes = 0;
    int recursionToSolve(TreeNode* node){
        // if(!node){
        //     return INT_MIN;
        // }
        // int maxy1, maxy;
        // int leftnigga = recursionToSolve(node->left), rightnigga=recursionToSolve(node->right);
        // maxy1 = max(leftnigga, rightnigga);
        // maxy = max(node->val, maxy1);
        // if(node -> val == maxy){
        //     dominantNodes++;
        // }
        // return maxy;
        int nigga = node->val;
        if(node->left){
            nigga = max(nigga, recursionToSolve(node->left));
        }if(node->right){
            nigga = max(nigga, recursionToSolve(node->right));
        }        if(node->val == nigga){
            dominantNodes++;
        }
        return nigga;
    }
public:
    int countDominantNodes(TreeNode* root) {
        recursionToSolve(root);
        return dominantNodes;
    }
};