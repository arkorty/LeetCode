class Solution {
    public String convert(String str, int rows) {
        String[] zigzag = new String[rows];
        for (int i = 0; i < rows; i++)
            zigzag[i] = "";

        for (int i = 0, j = 0, k = 0; i < str.length(); i++) {
            zigzag[j] += str.charAt(i);

            if (j == rows - 1)
                k = 1;
            if (j == 0)
                k = 0;
            if (k == 1 && j > 0)
                j--;
            if (k == 0 && j < rows - 1)
                j++;
        }

        String ret = "";
        for (int i = 0; i < rows; i++)
            ret += zigzag[i];

        return ret;
    }
}
