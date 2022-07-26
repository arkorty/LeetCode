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
    void maxDepth(TreeNode *root, int index, int *max) {
        if (root == nullptr) {
            if (index > *max) {
                *max = index;
            }

            return;
        } else {
            maxDepth(root->left, index + 1, max);
            maxDepth(root->right, index + 1, max);
        }
    }

  public:
    int maxDepth(TreeNode *root) {
        int max = 0;
        maxDepth(root, 0, &max);

        return max;
    }
};
