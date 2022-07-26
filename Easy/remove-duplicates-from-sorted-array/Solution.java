class Solution {
    public int removeDuplicates(int[] nums) {
        int k = 0;
        for (int i = 0, last = -101; i < nums.length; ++i) {
            if (last != nums[i]) {
                nums[k++] = nums[i];
                last = nums[i];
            }
        }

        return k;
    }
}
