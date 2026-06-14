class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int ans = 0;

        for(int left = 0; left < n-1; left++){
            for(int right = n-1; right >= 0; right--){
                int mini = min(heights[left],heights[right]);
                int dist = right - left;
                ans = max(mini*dist,ans);
            }
        }
        return ans;
    }
};
