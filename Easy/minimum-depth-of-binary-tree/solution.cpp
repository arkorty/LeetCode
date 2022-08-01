#include <cstdint>
#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    void traverse(TreeNode *root, int curlvl, int &minCount) {
        if (root == nullptr) {
            return;
        }

        if (root->left == nullptr && root->right == nullptr && curlvl < minCount) {
            minCount = curlvl;
        }

        traverse(root->left, curlvl + 1, minCount);
        traverse(root->right, curlvl + 1, minCount);
    }

    int minDepth(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }

        int minCount = INT32_MAX;
        traverse(root, 1, minCount);

        return minCount;
    }
};
