class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> ans(2,-1);
        int n= grid.size();
        int telement=n*n;
        unordered_set<int> freq;
        int sum=0,esum=(telement*(telement+1))/2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int val=grid[i][j];
                sum+=val;
                if(freq.count(val)){
                    ans[0]=val;
                }
                freq.insert(val);
            }
        }
        ans[1] = esum-(sum-ans[0]);
        return ans;
    }
};