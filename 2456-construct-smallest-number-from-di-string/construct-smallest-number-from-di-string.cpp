class Solution {
public:
    string smallestNumber(string pattern) {
        string result;
        stack<int> stk;
        int num = 1; // Start numbering from 1

        for (int i = 0; i <= pattern.size(); ++i) {
            stk.push(num++);
            if (i == pattern.size() || pattern[i] == 'I') {
                while (!stk.empty()) {
                    result += to_string(stk.top());
                    stk.pop();
                }
            }
        }
        return result;
    }
};