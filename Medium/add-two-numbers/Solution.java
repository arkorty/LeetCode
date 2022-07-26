class ListNode {
    int val;
    ListNode next;

    ListNode() {
    }

    ListNode(int val) {
        this.val = val;
    }

    ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }
}

class Solution {
    public ListNode addTwoNumbers(ListNode list1, ListNode list2) {
        ListNode head = new ListNode(0);
        ListNode cur = head;

        int carry = 0;
        while (list1 != null || list2 != null) {
            int dig1 = list1 != null ? list1.val : 0;
            int dig2 = list2 != null ? list2.val : 0;

            int sum = dig1 + dig2 + carry;
            cur.next = new ListNode(sum % 10);
            cur = cur.next;
            carry = sum / 10;

            if (list1 != null)
                list1 = list1.next;
            if (list2 != null)
                list2 = list2.next;
        }

        if (carry > 0)
            cur.next = new ListNode(carry);

        return head.next;
    }
}
