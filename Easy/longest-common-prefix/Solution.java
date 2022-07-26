class Solution {
    public String longestCommonPrefix(String[] strs) {
        int len = strs.length;

        if (len == 0)
            return "";

        if (len == 1)
            return strs[0];

        Arrays.sort(strs);

        int end = Math.min(strs[0].length(), strs[len - 1].length());

        int i = 0;
        while (i < end && strs[0].charAt(i) == strs[len - 1].charAt(i))
            i++;

        return strs[0].substring(0, i);
    }
}
