#include <string>
#include <algorithm>

class Solution {
public:
    int secondHighest(std::string s) {
        int largest = -1;
        int secondLargest = -1;

        for (char c : s) {
            if (std::isdigit(c)) {
                int digit = c - '0';
                
                if (digit > largest) {
                    secondLargest = largest;
                    largest = digit;
                } else if (digit < largest && digit > secondLargest) {
                    secondLargest = digit;
                }
            }
        }

        return secondLargest;
    }
};