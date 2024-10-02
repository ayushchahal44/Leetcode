class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());
        unordered_map<int, int> rankMap;
        int rank = 1;
        for (int i = 0; i < sortedArr.size(); i++) {
            if (rankMap.find(sortedArr[i]) == rankMap.end()) {
                rankMap[sortedArr[i]] = rank++;
            }
        }
        vector<int> result;
        for (int i = 0; i < arr.size(); i++) {
            result.push_back(rankMap[arr[i]]);
        }
        return result;
    }
};
