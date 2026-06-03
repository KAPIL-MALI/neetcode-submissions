class Solution {
public:
    bool isAnagram(string s, string t) {

        int n1 = s.size(),n2 = t.size();
        unordered_map<int,int>m;
        if(n1 != n2)return false;

        for(int i = 0; i < n1; i++){
            m[s[i]]++;
        }
        for(int i = 0; i < n2; i++){
            m[t[i]]--;
        }
        for(auto it : m){
            if(it.second != 0){
                return false;
            }
        }
        return true;
    }
};
