#include <vector>
#include <algorithm>
#include <climits>
#include <stdexcept>

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        // Ensure nums1 is the smaller array to minimize binary search steps
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }

        int m = nums1.size();
        int n = nums2.size();
        int low = 0, high = m;

        while (low <= high) {
            int partitionX = (low + high) / 2;
            int partitionY = (m + n + 1) / 2 - partitionX;

            // Handle edge cases where partitions fall at the very left/right ends
            int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
            int minRightX = (partitionX == m) ? INT_MAX : nums1[partitionX];

            int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
            int minRightY = (partitionY == n) ? INT_MAX : nums2[partitionY];

            // Check if we found the correct partition
            if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
                // If total elements is even
                if ((m + n) % 2 == 0) {
                    return (std::max(maxLeftX, maxLeftY) + std::min(minRightX, minRightY)) / 2.0;
                } 
                // If total elements is odd
                else {
                    return std::max(maxLeftX, maxLeftY);
                }
            } 
            else if (maxLeftX > minRightY) {
                // We are too far right on nums1, move left
                high = partitionX - 1;
            } 
            else {
                // We are too far left on nums1, move right
                low = partitionX + 1;
            }
        }

        throw std::invalid_argument("Input arrays are not sorted or invalid.");
    }
};