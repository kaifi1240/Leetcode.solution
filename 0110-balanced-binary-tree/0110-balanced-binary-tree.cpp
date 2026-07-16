class Solution {
public:
    bool balanced = true;

    int height(TreeNode* root) {
        if (!root)
            return 0;

        int left = height(root->left);
        int right = height(root->right);

        if (abs(left - right) > 1)
            balanced = false;

        return 1 + max(left, right);
    }

    bool isBalanced(TreeNode* root) {
        height(root);
        return balanced;
    }
};