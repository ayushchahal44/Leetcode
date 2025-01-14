class Solution {
public:
    bool check(vector<int>& nums) {
        int bpt=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i]){
                bpt++;
            }
        }
        if(bpt >1){
            return false;
        }
        return (nums.back()<=nums.front() || bpt ==0);
    }
};