class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mostFrequent = defaultdict(list)
        res = []
        for n in nums:
            if n not in mostFrequent:
                mostFrequent[n] = 1
            else:
                mostFrequent[n] += 1
        sortedMostFrequent = sorted(mostFrequent.items(), key=lambda x: x[1], reverse=True)
        for i in range(0, k):
            res.append(sortedMostFrequent[i][0])
        return res