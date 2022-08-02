class Solution {
    public int canBeTypedWords(String str, String chars) {
        StringTokenizer words = new StringTokenizer(str, " ");

        int ret = 0;
        for (boolean flag = true; words.hasMoreTokens(); flag = true) {
            String word = words.nextToken();
            for (int i = 0; i < chars.length(); i++) {
                if (word.indexOf(chars.charAt(i)) > -1) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                ++ret;
            }
        }

        return ret;
    }
}
