class Solution {
    public String longestPalindrome(String line) {
        if (line.length() < 2) {
            return line;
        } else {
            int start = 0, size = 0, left = 0, right = 0, middle = 0;
            while (middle < line.length()) {
                left = right = middle;
                while (right < line.length() - 1 && line.charAt(right) == line.charAt(right + 1)) {
                    ++right;
                }

                middle = right + 1;
                while (left > 0 && right < line.length() - 1 && line.charAt(left - 1) == line.charAt(right + 1)) {
                    --left;
                    ++right;
                }

                if (right - left + 1 > size) {
                    start = left;
                    size = right - left + 1;
                }
            }

            return line.substring(start, start + size);
        }
    }
}
