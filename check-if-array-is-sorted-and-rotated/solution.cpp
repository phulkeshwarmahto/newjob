#include <vector>

class Solution {
public:
    bool check(std::vector<int>& nums) {
        int count = 0;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            if (nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }

        return count <= 1;
    }
};