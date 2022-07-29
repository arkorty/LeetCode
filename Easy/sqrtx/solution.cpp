class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }

        int times = 20;
        double xi = x;
        for (int i = 0; i < times; ++i) {
            xi = (xi + x / xi) / 2;
        }

        return (int)xi;
    }
};
