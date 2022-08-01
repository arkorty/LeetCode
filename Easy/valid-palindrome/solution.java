class Solution {
    public boolean isPalindrome(String s) {
        String t = "";
        for (int i = 0; i < s.length(); ++i) {
            int a = (int)s.charAt(i);
            if (a >= (int)'A' && a <= (int)'Z') {
                t += (char)(a - (int)'A' + (int)'a');
            } else if (a >= (int)'a' && a <= (int)'z') {
                t += (char)a;
            } else if (a >= (int)'0' && a <= (int)'9') {
                t += (char)a;
            }
        }

        StringBuilder ob = new StringBuilder(t);
        String r = ob.reverse().toString();

        return t.compareTo(r) == 0;
    }
}
