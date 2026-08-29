#include <vector>

class Solution {
private:
    void heapify(std::vector<int>& nums, int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && nums[left] > nums[largest]) {
            largest = left;
        }

        if (right < n && nums[right] > nums[largest]) {
            largest = right;
        }

        if (largest != i) {
            std::swap(nums[i], nums[largest]);
            heapify(nums, n, largest);
        }
    }

public:
    std::vector<int> sortArray(std::vector<int>& nums) {
        int n = nums.size();

        // Step 1: Build max heap
        for (int i = n / 2 - 1; i >= 0; --i) {
            heapify(nums, n, i);
        }

        // Step 2: Extract elements from the heap one by one
        for (int i = n - 1; i > 0; --i) {
            std::swap(nums[0], nums[i]); // Move current root to end
            heapify(nums, i, 0);         // Call max heapify on the reduced heap
        }

        return nums;
    }
};