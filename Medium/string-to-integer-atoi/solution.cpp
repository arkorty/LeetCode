class Solution {
  public:
    int myAtoi(std::string s) {

        unsigned long value = 0;

        bool found = false, minus = false, signi = false;

        for (int i = 0, j = 0; i <= 200; ++i) {
            char chr = s[i];

            if (j > 18)
                break;

            else if ((int)chr == 0)
                break;

            else if (((int)chr == 43 || (int)chr == 45) && !found) {
                if ((int)chr == 45)
                    minus = true;
                found = true;
                continue;
            }

            else if (((int)chr == 43 || (int)chr == 45) && found) {
                break;
            }

            else if (((int)chr == 46 || ((int)chr >= 65 && (int)chr <= 90) ||
                      ((int)chr >= 97 && (int)chr <= 122)) &&
                     !found) {
                break;
            }

            else if (((int)chr == 46 || ((int)chr >= 65 && (int)chr <= 90) ||
                      ((int)chr >= 97 && (int)chr <= 122)) &&
                     found) {
                break;
            }

            else if ((int)chr == 32 && found)
                break;

            else if ((int)chr >= 48 && (int)chr <= 57) {
                if ((int)chr != 48)
                    signi = true;

                value = value * 10 + ((int)chr - 48);
                found = true;

                if (signi)
                    ++j;

                continue;
            }

            else if ((int)chr == 32 && !found)
                continue;
        }

        if (value > 2147483648 && minus)
            return -2147483648;
        else if (minus)
            return value * -1;
        else if (value > 2147483647)
            return 2147483647;
        else
            return value;
    }
};
