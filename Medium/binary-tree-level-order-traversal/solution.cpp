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
    void levelOrder(std::vector<std::vector<int>> &levels, TreeNode *root,
                    int index) {
        if (root == nullptr) {
            return;
        } else if (levels.size() == index) {
            levels.push_back(std::vector<int>{});
        }

        levels[index].push_back(root->val);
        levelOrder(levels, root->left, index + 1);
        levelOrder(levels, root->right, index + 1);
    }

  public:
    std::vector<std::vector<int>> levelOrder(TreeNode *root) {
        std::vector<std::vector<int>> levels;
        levelOrder(levels, root, 0);

        return levels;
    }
};
