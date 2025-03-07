class Solution {
public:
    void solve(vector<vector<int>> &res,vector<int> &subres,vector<int>& candidates, int target,int index){
        if(target==0){
            res.push_back(subres);
            return;
        }
        if(target<0) return;
        for(int i=index;i<candidates.size();i++){
            if (i > index && candidates[i] == candidates[i - 1]) continue;

            subres.push_back(candidates[i]);
            solve(res,subres,candidates,target-candidates[i],i+1);
            subres.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> subres;
        sort(candidates.begin(),candidates.end());
        solve(res,subres,candidates,target,0);
        return res;
    }
};