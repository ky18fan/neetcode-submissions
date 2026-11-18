class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        hash_map = defaultdict(int)
        for n in nums:
            hash_map[str(n)] += 1
        return int(max(hash_map, key=hash_map.get))