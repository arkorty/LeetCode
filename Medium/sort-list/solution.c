struct ListNode *merge(struct ListNode *left, struct ListNode *right) {
    if (!left) {
        return right;
    }
    if (!right) {
        return left;
    }

    if (left->val < right->val) {
        left->next = merge(left->next, right);
        return left;
    } else {
        right->next = merge(left, right->next);
        return right;
    }
}

struct ListNode *sortList(struct ListNode *head) {
    if (!head || !head->next) {
        return head;
    }
    struct ListNode *fast, *midd, *bmid;
    fast = midd = head;
    while (fast && fast->next) {
        bmid = midd;
        fast = fast->next->next;
        midd = midd->next;
    }

    bmid->next = NULL;
    return merge(sortList(head), sortList(midd));
}
