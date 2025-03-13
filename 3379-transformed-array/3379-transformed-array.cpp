class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int len = nums.size();
        vector<int> temp(len);
        for(int i=0;i<len;i++){
            temp[i]=nums[(i+nums[i]%len+len)%len];
        }
        return temp;
    }
};