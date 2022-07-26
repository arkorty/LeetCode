class Solution {
  public:
    std::vector<int> getRow(int n) {
        std::vector<int> prow = {1};

        for (int i = 1, prev = 1; i < n + 1; ++i) {
            int curr = (prev * (n - i + 1)) / i;
            prow.push_back(curr);
            prev = curr;
        }

        return prow;
    }

    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> rslt;

        for (int i = 0; i < numRows; ++i)
            rslt.push_back(getRow(i));

        return rslt;
    }
};
