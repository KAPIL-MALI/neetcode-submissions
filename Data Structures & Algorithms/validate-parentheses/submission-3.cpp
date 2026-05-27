class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int n = s.size(),i = 0;

        while(i < n){
            if(s[i] == '[' || s[i] == '{' || s[i] == '('){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else if(st.top() == '[' && s[i] == ']'){
                    st.pop();
                }
                else if(st.top() == '(' && s[i] == ')'){
                    st.pop();
                }
                else if(st.top() == '{' && s[i] == '}'){
                    st.pop();
                }
                else{
                    return false;
                }
        }
        i++;
        }
        if(st.size() == 0)return true;
        else return false;
    }
};
