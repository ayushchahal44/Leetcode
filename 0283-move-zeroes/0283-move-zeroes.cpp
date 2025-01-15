class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count =0;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                res.push_back(nums[i]);
            }
        }
        for(int i=0;i<count;i++){
            res.push_back(0);
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=res[i];
        }
        }
};
