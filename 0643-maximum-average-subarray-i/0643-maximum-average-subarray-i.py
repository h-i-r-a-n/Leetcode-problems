class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:

        sum = 0
        l = []

        for i in range(0, k):
            sum += nums[i]
        l.append(sum)

        for i in range(k, len(nums)):
            sum+=nums[i] - nums[i-k]
            l.append(sum)

        return max(l)/k

    



        