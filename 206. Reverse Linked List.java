class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode pre = null;
        while(head!=null){
            ListNode next_node = head.next;
            head.next = pre;
            pre = head;
            head = next_node;
        }
        return pre;
    }
}
