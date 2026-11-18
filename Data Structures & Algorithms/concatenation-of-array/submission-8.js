class Solution {
    /**
     * @param {number[]} nums
     * @return {number[]}
     */
    getConcatenation(nums) {
        const ans = new Array(nums.length * 2);
        let idx = 0;
        for (let i = 0; i < 2; i++) {
            for (let n of nums) {
                ans[idx++] = n;
            }
        }
        return ans;
    }
}
