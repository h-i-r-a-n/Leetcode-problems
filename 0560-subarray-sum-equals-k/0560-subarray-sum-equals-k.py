class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:

        count = 0
        prefix_sum = 0

        hashmap = {0: 1}

        for num in nums:

            prefix_sum += num

            needed = prefix_sum - k

            if needed in hashmap:
                count += hashmap[needed]

            hashmap[prefix_sum] = hashmap.get(prefix_sum, 0) + 1

        return count
        