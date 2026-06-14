class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int ans = 0,left = 0,right = n-1;

        while(left < right){

            int height = min(heights[left],heights[right]);
            int width = right-left;
            ans = max(height*width,ans);

            if(heights[left] <= heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return ans;
    }
};
