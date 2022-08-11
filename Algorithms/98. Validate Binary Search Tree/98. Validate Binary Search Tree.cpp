class Solution
{
    vector<int> vec;

public:
    void inoder(TreeNode *root)
    {
        if (root == NULL)
            return;
        inoder(root->left);
        vec.push_back(root->val);
        inoder(root->right);
    }

    bool isValidBST(TreeNode *root)
    {
        inoder(root);
        const auto duplicate = std::adjacent_find(vec.begin(), vec.end());
        if (duplicate == vec.end())
        {
            return is_sorted(vec.begin(), vec.end());
        }
        return false;
    }
};