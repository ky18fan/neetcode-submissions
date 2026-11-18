class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        hashMap = defaultdict(int)
        for n in nums:
            if n in hashMap:
                return True
            hashMap[n] += 1
        return False