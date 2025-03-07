class Solution {
public:
    void solve(vector<int >&nums,int index,vector<vector<int>> &res,vector<int> &sub){
        res.push_back(sub);
        for(int i=index;i<nums.size();i++){
            if(i>index && nums[i]==nums[i-1]) continue;
            sub.push_back(nums[i]);
            solve(nums,i+1,res,sub);
            sub.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>sub;
        sort(nums.begin(),nums.end());
        solve(nums,0,res,sub);
        return res;
    }
};