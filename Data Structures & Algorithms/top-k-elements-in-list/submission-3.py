class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        hashMap = defaultdict(list)
        output = []
        for num in nums:
            if num not in hashMap:
                hashMap[num] = 1
            else:
                hashMap[num] += 1
        sortedTuple = sorted(hashMap.items(), key=lambda x: x[1], reverse=True)
        for i in range(0, k):
            output.append(sortedTuple[i][0])
        return sorted(output)