# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: ListNode | None) -> None:
        temp = []
        current = head

        while current : 
            temp.append(current)
            current = current.next

        i = 0
        j = len(temp) - 1


        while i< j :
            temp[i].next = temp[j]
            i+=1

            if i ==j:
                break

            temp[j].next = temp[i]
            j-=1

        if temp:
            temp[i].next = None