class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for(int i = 0; i < n - 2; i++) {
            for(int j = i + 1; j < n - 1; j++) {
                for(int k = j + 1; k < n; k++) {

                    if(nums[i] + nums[j] + nums[k] == 0) {

                        vector<int> temp = {nums[i], nums[j], nums[k]};

                        // avoid duplicates
                        if(find(v.begin(), v.end(), temp) == v.end()) {
                            v.push_back(temp);
                        }
                    }
                }
            }
        }

        return v;
    }
};