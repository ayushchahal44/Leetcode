class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(), nums.end());
        int num=0; 
        for(int i=0;i<n;i++){
            if(num!=nums[i]){
                break;
            }
            num++;
        }
        return num;
    }
};