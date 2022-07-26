class IntegerReverse {
    public int reverse(int num) {
        if (num == 0)
            return 0;

        try {
            return Integer.parseInt(new StringBuilder(Integer.toString(Math.abs(num))).reverse().toString())
                    * (num < 0 ? -1 : 1);
        } catch (NumberFormatException err) {
            return 0;
        }
    }
}
