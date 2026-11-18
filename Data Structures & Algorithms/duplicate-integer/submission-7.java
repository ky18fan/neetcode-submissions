class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashMap<Integer, Integer> duplicatesHashMap = new HashMap<>();
        int numsSize = nums.length;
        for (int i = 0; i < numsSize; i++){
            if (duplicatesHashMap.containsKey(nums[i])){
                return true;
            }
            duplicatesHashMap.put(nums[i], +1);
        }
        return false;
    }
}