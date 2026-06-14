class Solution {
public:
    vector<int> countBits(int n) {

        vector<int>ans(n+1);
        int count = 0;

        //converting all values in the binary format
        for(int i = 0; i < ans.size(); i++){
            int num = i;
            while(num){
                int rem = num%2;
                if(rem == 1){
                    count++;
                }
                num /= 2;
            }
            if(num == 0){
                ans[i] = count;
                count = 0;
            }
        }
        return ans;
    }
};
