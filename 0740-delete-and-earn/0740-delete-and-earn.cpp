class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if(nums.empty()) return 0;
        int maxval = *max_element(nums.begin(),nums.end());
        vector<int> freq(maxval+1,0);
        for(int num:nums){
            freq[num]+=num;
        }
        vector<int> dp(maxval+1,0);
        dp[1] = freq[1];
        for(int i=2;i<=maxval;i++){
            dp[i] = max(dp[i-1],dp[i-2]+freq[i]);
        }
        return dp[maxval];
    }
};