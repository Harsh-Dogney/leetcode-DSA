class Solution {
public:
    bool isValid(string s) {
        if (s.size() > 1) {
            stack<char> st;
            st.push(' ');
            for (int i = 0; i < s.size(); i++) {
                if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                    st.push(s[i]);
                } else {
                    if (s[i] == ')') {
                        if (st.top() == '(') {
                            st.pop();
                        } else {
                            st.push(s[i]);
                        }
                    } else if (s[i] == '}') {
                        if (st.top() == '{') {
                            st.pop();
                        } else {
                            st.push(s[i]);
                        }
                    } else {
                        if (st.top() == '[') {
                            st.pop();
                        } else {
                            st.push(s[i]);
                        }
                    }
                }
            }
            if (!st.empty())
                st.pop();

            if (st.empty())
                return true;
            else
                return false;
        } else
            return false;
    }
};