# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: ListNode | None, list2: ListNode | None) -> ListNode | None:

        l = []
        current = list1

        while current:
            l.append(current.val)
            current = current.next

        current = list2

        while current:
            l.append(current.val)
            current = current.next

        l.sort()

        dummy = ListNode(0) 
        current = dummy

        for i in l:
            current.next = ListNode(i)
            current=current.next

        return dummy.next





         

        
        