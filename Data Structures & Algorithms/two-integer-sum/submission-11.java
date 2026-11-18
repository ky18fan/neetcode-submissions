class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> set = new HashMap<Integer, Integer>();
        for (int i = 0; i < nums.length; i++) {
            set.put(nums[i], i);
        }
        for (int i = 0; i < nums.length; i++) {
            int comp = target - nums[i];
            if (set.containsKey(comp) && set.get(comp) != i) {
                return new int[] {i, set.get(comp)};
            }
        }
        return new int[] {};
    }
}
