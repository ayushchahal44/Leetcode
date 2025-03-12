class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res(2,0);
        unordered_map<int,int> freq;
        for(int n:nums){
            freq[n]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(freq[i]==2){
                res[0]=i;
            }
            else if(freq[i]==0){
                res[1]=i;
            }
        }
        return res;
    }
};