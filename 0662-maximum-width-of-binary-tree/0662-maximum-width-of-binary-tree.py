# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def widthOfBinaryTree(self, root: TreeNode | None) -> int:
        if not root:
            return 0

        queue = deque([(root, 0)])

        maximum_width = 0

        while queue:

            level_size = len(queue)

            first_index = queue[0][1]

            for i in range(level_size):

                node, index = queue.popleft()

                index = index - first_index

                if i == 0:
                    first = index

                if i == level_size - 1:
                    last = index

                if node.left:
                    queue.append((node.left, 2 * index))

                if node.right:
                    queue.append((node.right, 2 * index + 1))

            width = last - first + 1

            maximum_width = max(maximum_width, width)

        return maximum_width

        