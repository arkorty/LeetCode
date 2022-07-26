class Solution {
    public int titleToNumber(String ttl) {
        int num = 0;
        for (int i = 0; i < ttl.length(); i++)
            num += Math.pow(26, i) * (int) (ttl.charAt(ttl.length() - i - 1) - 64);

        return num;
    }
}
