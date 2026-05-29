class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size(),total = 0,realtotal = 0;

        for(int i = 0; i < n; i++){
            total += nums[i];
        }
        for(int i = 1; i <= n; i++){
            realtotal += i;
        }

        if(total == realtotal){
            return 0;
        }
        else{
            return realtotal-total;
        }
    }
};
