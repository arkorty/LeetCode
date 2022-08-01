#include <cmath>
#include <cstdint>

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t r = 0;
        for (int i = 31; i >= 0; --i) {
            if (n / (uint32_t)std::pow(2, i) >= 1) {
                n -= (uint32_t)std::pow(2, i);
                r += (uint32_t)std::pow(2, 31 - i);
            }
        }

        return r;
    }
};
