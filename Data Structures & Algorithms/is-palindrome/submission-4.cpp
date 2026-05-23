class Solution {
public:
    bool isPalindrome(string s) {

        int start = 0;
        int end = s.size() - 1;

        while(start < end){

            // Skip invalid characters from left side
            while(start < end && !isalnum(s[start])){
                start++;
            }

            // Skip invalid characters from right side
            while(start < end && !isalnum(s[end])){
                end--;
            }

            // Convert both characters to lowercase and compare
            if(tolower(s[start]) != tolower(s[end])){
                return false;
            }

            // Move both pointers toward center
            start++;
            end--;
        }

        return true;
    }
};