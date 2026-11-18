class Solution:
    def hammingWeight(self, n: int) -> int:
        bitCount = 0
        for i in range(32):
            if (0x1 << i) & n:
                bitCount += 1
        return bitCount
            