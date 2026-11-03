# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def getDecimalValue(self, head: ListNode | None) -> int:
        binary = ""
        current = head

        while current:
            binary+=str(current.val)
            current = current.next

        return int(binary,2)
        