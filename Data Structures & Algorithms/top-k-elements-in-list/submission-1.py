class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        hash_map = defaultdict(list)
        res = []
        for n in nums:
            if n not in hash_map:
                hash_map[n] = 1
            else:
                hash_map[n] += 1
        sorted_tuple = sorted(hash_map.items(), key=lambda x: x[1], reverse=True)
        for i in range(0, k):
            res.append(sorted_tuple[i][0])
        return res