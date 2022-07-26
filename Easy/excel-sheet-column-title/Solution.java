class Solution {
    public String convertToTitle(int num) {
        StringBuilder ttl = new StringBuilder();

        while (num > 0) {
            --num;
            char tba = (char) (num % 26 + 65);
            ttl.insert(0, tba);
            num /= 26;
        }

        return ttl.toString();
    }
}
