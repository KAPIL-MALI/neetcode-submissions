class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int first = 0,last = n-1;

        while(first <= last){
            
            int mid = first+(last-first)/2;

            if(nums[mid] == target){
                return mid;
            }

            if(nums[first] <= nums[mid]){
                if(target <= nums[mid] && target >= nums[first]){
                    last = mid;
                }
                else{
                    first = mid+1;
                }
            }
            else{
                if(target >= nums[mid] && target <= nums[last]){
                    first = mid;
                }
                else{
                    last = mid;
                }
            }
        }
        return -1;

    }
};
