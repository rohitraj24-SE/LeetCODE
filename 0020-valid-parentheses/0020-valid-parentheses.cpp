class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;
        int i;
        
        for(int i=0;i<n;i++){
            if(s[i]== '(' ||s[i]=='{' || s[i]=='[' ){
            st.push(s[i]);
            continue;
            }
            if(s[i]==')'||s[i]=='}'||s[i]==']'){
                if(st.empty())
                return false;
            }
            if(s[i]==')' && st.top()=='('){
            st.pop();
            continue;
            }
            if(s[i]=='}' && st.top()=='{'){
            st.pop();
            continue;
            }
            if(s[i]==']' && st.top()=='['){
            st.pop();
            continue;
            }
            if(!st.empty())
            return false;
            }
        return st.empty();
    }
};