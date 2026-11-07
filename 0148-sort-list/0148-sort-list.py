# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: ListNode | None) -> ListNode | None:
        # will be using merge sort for this
        
        def merge(left,right):
            dummy = ListNode(0)
            current = dummy

            while left and right:

                if left.val<=right.val:
                    current.next = left
                    left = left.next
                else:
                    current.next = right
                    right = right.next
                current = current.next

            if left:
                current.next = left

            else:
                current.next = right

            return dummy.next
        
        def mergesort(head):
            if not head or not head.next:
                return head

            #merge sort involves finding the mid and splittin, so we be finding the mid using the slow and fast pointer teq


            slow = head
            fast = head.next

            while fast and fast.next:
                slow = slow.next
                fast = fast.next.next


            
            left = head
            right = slow.next
            slow.next = None

            left = mergesort(left)
            right = mergesort(right)

            return merge(left,right)

        return mergesort(head)





        