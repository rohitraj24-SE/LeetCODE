class Solution {
public:
    int calculate(string s) {
        int n = s.length();
        char opr = '+';
        stack<int> st;
        int num = 0;

        for (int i = 0; i < n; i++) {
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            }

            if ((!isdigit(s[i]) && s[i] != ' ') || i == n - 1) {
                if (opr == '+') {
                    st.push(num);
                }
                else if (opr == '-') {
                    st.push(-num);
                }
                else if (opr == '*') {
                    int m = st.top();
                    st.pop();
                    st.push(m * num);
                }
                else if (opr == '/') {
                    int m = st.top();
                    st.pop();
                    st.push(m / num);
                }

                opr = s[i];
                num = 0;
            }
        }

        int res = 0;
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }

        return res;
    }
};