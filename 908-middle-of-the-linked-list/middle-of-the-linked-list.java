class Solution {
    public ListNode middleNode(ListNode head)
    {
        // If the linked list is empty
        if(head == null)
        {
            return null;
        }

        // slow moves 1 step
        // fast moves 2 steps
        ListNode slow = head;
        ListNode fast = head;

        // When fast reaches the end,
        // slow will be at the middle.
        while(fast != null && fast.next != null)
        {
            slow = slow.next;
            fast = fast.next.next;
        }

        // slow is now pointing to the middle node
        return slow;
    }
}