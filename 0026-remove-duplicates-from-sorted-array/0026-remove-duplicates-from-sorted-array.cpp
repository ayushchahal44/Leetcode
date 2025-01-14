class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        auto it = unique(nums.begin(), nums.end());
        nums.erase(it, nums.end());
        return nums.size();
    }
};