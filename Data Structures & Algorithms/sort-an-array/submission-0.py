class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        nums_size = len(nums)
        swapped = False
        i = 0
        while(i < nums_size - 1):
            j = 0
            while(j < nums_size - i - 1):
                if nums[j] > nums[j+1]:
                    nums[j], nums[j+1] = nums[j+1], nums[j]
                    swapped = True
                j+=1
            if not swapped: # if no swap happened, then array is sorted, just an optimization
                break
            i+=1
        return nums