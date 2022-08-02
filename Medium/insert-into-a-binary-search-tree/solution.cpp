struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right)
        : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode *insertIntoBST(TreeNode *root, int val) {
        TreeNode *node = root;
        while (node != nullptr) {
            if (val < node->val && node->left == nullptr) {
                node->left = new TreeNode(val);
                break;
            } else if (val > node->val && node->right == nullptr) {
                node->right = new TreeNode(val);
                break;
            } else if (val > node->val) {
                node = node->right;
            } else if (val < node->val) {
                node = node->left;
            }
        }

        return root != nullptr ? root : new TreeNode(val);
    }
};
