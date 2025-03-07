class Solution {
public:
    void solve(vector<vector<int>> &res,vector<int> &subres,vector<int>& candidates, int target,int index){
        if(target==0){
            res.push_back(subres);
            return;
        }
        if(target<0) return ;
        
        for(int i=index;i<candidates.size();i++){
            subres.push_back(candidates[i]);
            solve(res,subres,candidates,target-candidates[i],i);
            subres.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> subres;
        solve(res,subres,candidates,target,0);
        return res;
    }
};