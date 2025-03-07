class Solution {
public:
    void solve(vector<int >&nums,int index,vector<vector<int>> &res,vector<int> &sub){
        if(index==nums.size()){
            res.push_back(sub);
            return;
        }
        sub.push_back(nums[index]);
        solve(nums,index+1,res,sub);
        sub.pop_back();
        solve(nums,index+1,res,sub);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>sub;
        solve(nums,0,res,sub);
        return res;
    }
};