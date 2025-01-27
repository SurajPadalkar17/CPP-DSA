#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
private:
    void solve(vector<char> nums, vector<vector<char>>& ans, int index) {
        // base case
        if (index >= nums.size()) {
            ans.push_back(nums);
            return;
        }
        for (int j = index; j < nums.size(); j++) {
            swap(nums[index], nums[j]);
            solve(nums, ans, index + 1);
            // backtrack
            swap(nums[index], nums[j]);
        }
    }

public:
    vector<vector<char>> permute(vector<char>& nums) {
        vector<vector<char>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};

int main() {
    vector<char> nums = {'a', 'b', 'c'};
    
    Solution sol;
    vector<vector<char>> result = sol.permute(nums);
    
    // Print the result
    for (const auto& permutation : result) {
        for (char c : permutation) {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}
