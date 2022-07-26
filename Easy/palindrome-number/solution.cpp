class Solution {
  public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        } else {
            long int y = 0;
            for (int i = x; i != 0; i /= 10) {
                y = y * 10 + i % 10;
            }

            return x == (int)y;
        }
    }
};
