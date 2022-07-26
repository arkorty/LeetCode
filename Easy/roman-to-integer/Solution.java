class RomanToInteger {
    int applyOffset(int value, int last_value, int offset) {
        if (last_value > value) {
            return offset - value;
        } else {
            return offset + value;
        }
    }

    public int romanToInt(String roman) {
        int integer = 0;
        int last_value = 0;
        for (int x = roman.length() - 1; x >= 0; x--) {
            char convertToDecimal = roman.charAt(x);

            switch (convertToDecimal) {
                case 'M':
                    integer = applyOffset(1000, last_value, integer);
                    last_value = 1000;
                    break;

                case 'D':
                    integer = applyOffset(500, last_value, integer);
                    last_value = 500;
                    break;

                case 'C':
                    integer = applyOffset(100, last_value, integer);
                    last_value = 100;
                    break;

                case 'L':
                    integer = applyOffset(50, last_value, integer);
                    last_value = 50;
                    break;

                case 'X':
                    integer = applyOffset(10, last_value, integer);
                    last_value = 10;
                    break;

                case 'V':
                    integer = applyOffset(5, last_value, integer);
                    last_value = 5;
                    break;

                case 'I':
                    integer = applyOffset(1, last_value, integer);
                    last_value = 1;
                    break;
            }
        }
        return integer;
    }
}
