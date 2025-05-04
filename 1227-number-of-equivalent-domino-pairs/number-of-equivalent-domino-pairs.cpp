class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        unordered_map<int, int> count;
        int result = 0;

        for (auto& d : dominoes) {
            // normalize the domino so [2,1] and [1,2] become the same key
            int key = min(d[0], d[1]) * 10 + max(d[0], d[1]);
            result += count[key];
            count[key]++;
        }

        return result;
    }
};