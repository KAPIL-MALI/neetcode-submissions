class Solution {
public:
    bool isPalindrome(string s) {
        
        int n = s.size();

        for(int i = 0; i < n; i++){
            s[i] = tolower(s[i]);
        }

        string s1 = "";;
        int i = 0;
        while(i < n){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                s1 += s[i];
            }
            i++;
        }

        int start = 0,end = s1.size()-1;
        while(start<=end){
            if(s1[start++] != s1[end--]){
                return false;
            }
        }

        return true;
    }
};
