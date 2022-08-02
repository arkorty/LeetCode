struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
private:
    ListNode *removeElements(ListNode *head, int val) {
        if (head == nullptr) {
            return nullptr;
        } else if (head->val == val) {
            return removeElements(head->next, val);
        } else {
            head->next = removeElements(head->next, val);
            return head;
        }
    }

public:
    ListNode *deleteDuplicates(ListNode *head) {
        for (ListNode *curr = head; curr != nullptr && curr->next != nullptr;
             curr = curr->next) {
            if (curr->val == curr->next->val) {
                curr->next = removeElements(curr->next, curr->val);
            }
        }

        return head;
    }
};
