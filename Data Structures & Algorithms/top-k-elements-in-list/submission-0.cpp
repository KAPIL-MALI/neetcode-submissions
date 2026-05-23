class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        int n = nums.size();
        unordered_map<int,int> m;

        // Frequency counting ✅
        for(int i = 0; i < n; i++){
            m[nums[i]]++;
        }

        // ✅ We need a structure that gives highest frequency first.
        // So we use max heap.

        priority_queue<pair<int,int>> pq;

        
        for(auto it = m.begin(); it != m.end(); it++){
            // Push {frequency, element}
            pq.push({it->second, it->first});
        }

        vector<int> ans;

        // Take top k frequent elements
        while(k--){
            // pq.top().first  -> frequency
            // pq.top().second -> actual element
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};