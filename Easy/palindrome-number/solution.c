#include <stdbool.h>

bool isPalindrome(long int a) {
    if (a < 0)
        return false;

    long int b = 0;
    for (long int c = a; c != 0; c /= 10)
        b = b * 10 + (c % 10);

    if (a == b)
        return true;
    else
        return false;
}
