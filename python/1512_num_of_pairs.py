class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        # using defaultdict for counting
        temp_hash = defaultdict(int)
        result = 0
        for i in nums:
            result += temp_hash[i]
            temp_hash[i] += 1
        return result