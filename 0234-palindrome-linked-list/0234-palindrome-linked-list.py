# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def isPalindrome(self, head):
        

        dummy = ListNode(0)
        cur1 = head
        cur2 = dummy
        
        while cur1:
            cur2.next = ListNode(cur1.val)
            cur2 = cur2.next

            cur1= cur1.next

        
        prev  = None

        current = dummy.next

        while current:
            next_node = current.next
            current.next = prev
            prev = current
            current = next_node

        p1 = head
        p2 = prev

        while p1 and p2:
            if p1.val != p2.val:
                return False  # Values don't match -> Not a palindrome
            p1 = p1.next
            p2 = p2.next

        return True

        
        

