class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> startTime, endTime;
        for(const auto& i : intervals){
            startTime.push_back(i[0]);
            endTime.push_back(i[1]);
        }
        sort(startTime.begin(),startTime.end());
        sort(endTime.begin(),endTime.end());

        int end = 0, count = 0;

        for(int start: startTime){
            if(start > endTime[end]){
                end++;  
            } else{
                count++;
            }
        }
        return count;
    }
};