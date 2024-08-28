#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int r = 0, l = 0, maxLength = 0;
        int n = nums.size(), zero = 0;

        while (r < n) {
            if (nums[r] == 0) zero++;
            while (zero > k) {
                if (nums[l] == 0) zero--;
                l++;
            }
            maxLength = max(maxLength, r - l + 1);
            r++;
        } 
        return maxLength;
    }
};
