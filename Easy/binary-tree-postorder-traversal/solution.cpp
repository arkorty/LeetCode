#include <vector>

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
    void traverse(std::vector<int> &list, TreeNode *root) {
        if (root == nullptr) {
            return;
        } else {
            traverse(list, root->left);
            traverse(list, root->right);
            list.push_back(root->val);
        }
    }

  public:
    std::vector<int> postorderTraversal(TreeNode *root) {
        std::vector<int> list;
        traverse(list, root);
        return list;
    }
};
