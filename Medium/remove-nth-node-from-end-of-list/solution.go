/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func removeNthFromEnd(head *ListNode, n int) *ListNode {
    cap := &ListNode{0, head}
    lcap, rcap := cap, cap
    for i := 0; i < n + 1; i++ {
        rcap = rcap.Next
    }
    for rcap != nil {
        rcap = rcap.Next
        lcap = lcap.Next
    }
    lcap.Next = lcap.Next.Next
    return cap.Next
}
