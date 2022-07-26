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
    bool isValidBST(TreeNode *root, int *minptr, int *maxptr) {
        if (root == nullptr) {
            return true;
        } else if ((maxptr != nullptr && *maxptr <= root->val) ||
                   (minptr != nullptr && *minptr >= root->val)) {
            return false;
        } else {
            return isValidBST(root->left, minptr, &root->val) &&
                   isValidBST(root->right, &root->val, maxptr);
        }
    }

  public:
    bool isValidBST(TreeNode *root) {
        return isValidBST(root, nullptr, nullptr);
    }
};
