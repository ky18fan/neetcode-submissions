class Solution {
    public boolean hasDuplicate(int[] nums) {
        HashMap<Integer, Integer> hashMap = new HashMap<Integer, Integer>();
        for (int i = 0; i < nums.length; i++) {
            if (hashMap.containsKey(nums[i])) {
                return true;
            }
            hashMap.put(nums[i], 1);
        }
        return false;
    }
}