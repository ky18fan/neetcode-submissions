class Solution:
    def countBits(self, n: int) -> List[int]:
        nums = [x for x in range(0, n + 1)]
        res = []
        for num in nums:
            bitCount = 0
            for i in range(32):
                if (0x1 << i) & num:
                    bitCount += 1
            res.append(bitCount)
        return res
