class Solution {
  public:
    std::vector<int> twoSum(std::vector<int> &numbers, int target) {
        int j = -1;
        for (int i = 0; i < numbers.size(); ++i) {
            int otherhalf = target - numbers[i];

            j = binarySearch(numbers, 0, numbers.size() - 1, otherhalf);

            if (j != -1 && i != j) {
                if (i < j)
                    return std::vector{i + 1, j + 1};
                else
                    return std::vector{j + 1, i + 1};
            }
        }

        return std::vector{-1, -1};
    }

    int binarySearch(std::vector<int> &numbers, int start, int end, int key) {
        if (start <= end) {
            int middle = (start + end) / 2;
            if (numbers[middle] == key)
                return middle;
            else if (numbers[middle] > key)
                return binarySearch(numbers, start, middle - 1, key);
            else
                return binarySearch(numbers, middle + 1, end, key);
        }
        return -1;
    }
};
