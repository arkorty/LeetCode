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
  private:
    bool isSymmetric(TreeNode *left, TreeNode *right) {
        if (left == nullptr && right == nullptr) {
            return true;
        } else if (left == nullptr || right == nullptr) {
            return false;
        } else if (left->val == right->val) {
            return isSymmetric(left->left, right->right) &&
                   isSymmetric(left->right, right->left);
        } else {
            return false;
        }
    }

  public:
    bool isSymmetric(TreeNode *root) {
        return isSymmetric(root->left, root->right);
    }
};
