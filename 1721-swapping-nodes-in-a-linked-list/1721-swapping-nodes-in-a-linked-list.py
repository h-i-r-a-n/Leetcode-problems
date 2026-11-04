# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapNodes(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:

        l = []

        current = head

        while current : 
            l.append(current.val)
            current = current.next

       

        l[k-1],l[len(l)-k] = l[len(l)-k],l[k-1]
    
        dummy = ListNode(0)

        current = dummy

        for i in l:
            current.next = ListNode(i)
            current = current.next

        return dummy.next


        