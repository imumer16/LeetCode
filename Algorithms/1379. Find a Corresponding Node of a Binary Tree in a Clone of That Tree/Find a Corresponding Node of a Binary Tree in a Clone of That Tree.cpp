/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution
{
public:
    void Pre(TreeNode *C, TreeNode *&R, TreeNode *T)
    {
        if (C == NULL)
        {
            return;
        }

        if (C->val == T->val)
        {
            R = C;
        }
        Pre(C->left, R, T);
        Pre(C->right, R, T);
    }

    TreeNode *getTargetCopy(TreeNode *original, TreeNode *cloned, TreeNode *target)
    {
        TreeNode *ret = NULL;
        Pre(cloned, ret, target);
        return ret;
    }
};