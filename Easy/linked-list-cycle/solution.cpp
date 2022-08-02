#include <iostream>
#include <unordered_map>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    // bool hasCycle(ListNode *head) {
    //     std::unordered_map<ListNode *, int> hmap;
    //     ListNode *curr = head;
    //     while (curr != NULL) {
    //         if (++hmap[curr] == 2) {
    //             return true;
    //         } else {
    //             curr = curr->next;
    //         }
    //     }
    //
    //     return false;
    // }

    bool hasCycle(ListNode *head) {
        if (head == NULL) {
            return false;
        }

        ListNode *slow = head, *fast = head;
        int taken = 0, limit = 2;

        while (fast->next != NULL) {
            fast = fast->next;
            ++taken;
            if (slow == fast) {
                return true;
            }

            if (taken == limit) {
                taken = 0;
                limit *= 2;
                slow = fast;
            }
        }

        return false;
    }
};
