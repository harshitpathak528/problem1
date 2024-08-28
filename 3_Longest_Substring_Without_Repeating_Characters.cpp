//This while loop will make sure that the element when it first come its value assign to its index value 
//which means its not -1 if that value again come then ths sliding window shrink to that pos + 1  

#include<bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, r = 0, maxLength = 0;
        vector<int> hash(256, -1);  // Initialize hash array with -1
        int n = s.size();

        while (r < n) {
            if (hash[s[r]] != -1) {
                l = max(hash[s[r]] + 1, l);  // Update l to be the maximum of hash[s[r]] + 1 and current l
            }
            maxLength = max((r - l + 1), maxLength);
            hash[s[r]] = r;
            r++;
        }
        return maxLength;
    }
};

int main() {
    Solution sol;
    string s = "abcabcbb";
    cout << "Length of longest substring without repeating characters: " << sol.lengthOfLongestSubstring(s) << std::endl;
    return 0;
}
