class Solution:
    def validPalindrome(self, s: str) -> bool:
        l = 0
        for r in range(len(s)):
            sCopy = s[:r] + s[r+1:]
            if sCopy[::-1] == sCopy:
                return True
        return False