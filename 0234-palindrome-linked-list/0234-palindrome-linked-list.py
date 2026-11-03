# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: ListNode | None) -> bool:

        #STEP 1 : FIND MID USING SLOW AND FAST POINTERS
        #STEP 2 : once at mid, start reversing the rest of the LL using the rev algo
        #STEP 3 : ONCE THE IT REACHES END START LOOPING FROM START AND END TOWARDS THE MIDDLE UNTIL IT AINT DIFFERNT

        slow = head
        fast = head

        while fast and fast.next:
            slow = slow.next
            fast = fast.next.next

        prev = None
        current = slow

        while current:
            next_node = current.next
            current.next = prev
            prev = current
            current = next_node

        left = head
        right = prev

        while right:
            if left.val!=right.val :
                return False

            left = left.next
            right = right.next

        return True
        