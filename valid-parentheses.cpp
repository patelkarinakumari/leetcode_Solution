class Solution {
public:
    bool isValid(string s) {
        int t = -1;
        char stack[s.size()];
        for (int i = 0; i < s.size(); i++) {
            char c = s[i];
            if (c == '(' || c == '{' || c == '[') {
                stack[++t] = c;
            } else {
                if (t == -1) return false;
                if ((c == ')' && stack[t] != '(') ||
                    (c == '}' && stack[t] != '{') ||
                    (c == ']' && stack[t] != '[')) {
                    return false;
                }
                t--;
            }
        }
        return t == -1;
    }
};