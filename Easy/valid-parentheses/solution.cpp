#include <iostream>
#include <stack>

class Solution {
public:
    bool isValid(std::string line) {
        std::stack<char> shelf;
        for (auto iter = line.begin(); iter != line.end(); iter.operator++()) {
            if (*iter == '(' || *iter == '{' || *iter == '[') {
                shelf.push(*iter);
            } else if (shelf.empty()) {
                return false;
            } else if ((*iter == ')' && shelf.top() == '(') ||
                       (*iter == '}' && shelf.top() == '{') ||
                       (*iter == ']' && shelf.top() == '[')) {
                shelf.pop();
            } else {
                return false;
            }
        }

        return shelf.empty();
    }
};
