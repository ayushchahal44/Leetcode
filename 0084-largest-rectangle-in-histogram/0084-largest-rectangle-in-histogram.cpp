class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int res = 0, n = heights.size();
        for(int i = 0; i < n; i++){
            int curr = heights[i];
            for(int j = i-1; j>=0 && heights[j] >= heights[i]; j--)
                 curr += heights[i];
            for(int j = i+1; j<n && heights[j] >= heights[i]; j++)
                curr += heights[i];
            res = max(res, curr);
        }
        return res;
    }
};