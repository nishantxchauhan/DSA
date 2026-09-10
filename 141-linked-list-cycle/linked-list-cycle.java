public class Solution 
{
    public boolean hasCycle(ListNode head) 
    {
        // If the list is empty, there cannot be a cycle.
        if(head == null)
        {
            return false;
        }

        // slow moves 1 step at a time
        // fast moves 2 steps at a time
        ListNode slow = head;
        ListNode fast = head;

        // Continue as long as fast can move 2 steps.
        while(fast != null && fast.next != null)
        {
            slow = slow.next;
            fast = fast.next.next;

            // If they meet, there is a cycle.
            if(slow == fast)
            {
                return true;
            }
        }

        // If fast reaches null, there is no cycle.
        return false;
    }
}