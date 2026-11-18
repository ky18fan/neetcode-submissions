class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        nums_size = len(nums)
        swapped = False
        i = 0
        print(nums)
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
        