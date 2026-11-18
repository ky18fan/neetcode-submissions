class Solution:
    def hammingWeight(self, n: int) -> int:
        bitCount = 0
        for i in range(0, 31):
            bitCount += (n >> i) & 1
        return bitCount
            