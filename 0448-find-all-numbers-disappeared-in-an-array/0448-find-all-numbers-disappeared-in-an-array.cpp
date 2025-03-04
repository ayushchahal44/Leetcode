class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        set<int> unique(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++){
            if(unique.find(i)==unique.end()) res.push_back(i);
        }
        return res;
    }
};