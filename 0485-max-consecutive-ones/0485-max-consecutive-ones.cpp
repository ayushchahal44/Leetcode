class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int result = 0;
        int temp = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                temp++;
            } else {
                result = max(result, temp);
                temp = 0;
            }
        }

        // Final check for the last sequence of 1's
        result = max(result, temp);

        return result;
    }
};
