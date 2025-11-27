# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

"""
Same code logic applies as the C solution, just implemented in Python syntax. (28/28 cases passed)
"""
class Solution(object):
    def reverseList(self, head):
        if (head == None):
            return head
        curr = head.next
        if (curr == None):
            return head
        save = curr.next
        head.next = None
        while(curr != None):
            curr.next = head
            head = curr
            curr = save
            if (save != None):
                save = save.next
        return head

        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        
