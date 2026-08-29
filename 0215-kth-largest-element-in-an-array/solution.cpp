#include <vector>
#include <queue>

class Solution {
public:
    int findKthLargest(std::vector<int>& nums, int k) {
        // Min-heap to store the k largest elements
        std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

        for (int num : nums) {
            minHeap.push(num);
            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        return minHeap.top();
    }
};