# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: ListNode | None) -> ListNode | None:

        current = head
        count = 0
        while current:
            current = current.next
            count+=1

        half = 0
        half = count//2
        lst = []
        count = 0
        current = head
        while current:
            if count >= half:
                return current


            current = current.next
            count+=1
        
        


        