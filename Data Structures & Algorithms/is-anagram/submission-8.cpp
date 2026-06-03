class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int n1 = s.size(),n2 = t.size();
        if(n1 != n2)return false;
        vector<int>ans(26,0);

        for(int i = 0; i < n1; i++){
            ans[s[i]-'a']++;
            ans[t[i]-'a']--;
        }
        
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] != 0){
                return false;
            }
        }
        return true;

    }
};
