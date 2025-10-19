#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;
        for (int num : s) {
            if (!s.count(num - 1)) {
                int curr = num;
                int streak = 1;
                while (s.count(curr + 1)) {
                    curr++;
                    streak++;
                }
                longest = max(longest, streak);
            }
        }
        return longest;
    }
};

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    Solution sol;
    cout << sol.longestConsecutive(nums);
}
