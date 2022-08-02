#include <stack>
#include <string>

class Solution {
public:
    int longestValidParentheses(std::string line) {
        std::stack<int> shelf;
        shelf.push(-1);

        int max = 0;
        for (int i = 0; i < line.length(); ++i) {
            if (line[i] == '(') {
                shelf.push(i);
            } else {
                shelf.pop();
                if (shelf.empty()) {
                    shelf.push(i);
                } else if (max < i - shelf.top()) {
                    max = i - shelf.top();
                }
            }
        }

        return max;
    }
};
