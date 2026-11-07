class Solution:
    def reverseKGroup(self, head, k):

        dummy = ListNode(0)
        dummy.next = head
        group_prev = dummy

        while True:
            current = group_prev.next
            prev = None
            start = current
            i = 0

            while current and i < k:
                next_node = current.next
                current.next = prev
                prev = current
                current = next_node
                i += 1

            if i < k:
                current = prev
                prev = None

                while current:
                    next_node = current.next
                    current.next = prev
                    prev = current
                    current = next_node

                group_prev.next = prev
                break

            group_prev.next = prev
            start.next = current
            group_prev = start

        return dummy.next