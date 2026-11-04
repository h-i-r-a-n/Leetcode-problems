# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode | None, l2: ListNode | None) -> ListNode | None:

        a = ""
        b = ""

        current = l1

        while current:
            a+=str(current.val)
            current = current.next

        current  = l2

        while current:
            b+=str(current.val)
            current = current.next


        a= a[::-1]
        b= b[::-1]

        sum = int(a) + int(b)

        dummy = ListNode(0)

        current = dummy

        if sum == 0:
            return dummy

        while sum>0:
            digit = sum%10
            current.next = ListNode(digit)
            current = current.next

            sum//=10

        return dummy.next

       
        

        


        