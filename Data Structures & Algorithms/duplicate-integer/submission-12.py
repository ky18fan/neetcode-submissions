class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        if not nums:
            return False
        count = {}
        for n in nums:
            count[n] = 1 + count.get(n, 0)
        return False if count and max(count.values()) <= 1 else True