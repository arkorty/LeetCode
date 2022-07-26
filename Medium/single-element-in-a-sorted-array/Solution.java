class Solution {
    public int singleNonDuplicate(int[] nums) {
        for (int i = 0; i < nums.length - 1; i += 2)
            if (nums[i] != nums[i + 1])
                return i;

        return nums.length - 1;
    }
}
