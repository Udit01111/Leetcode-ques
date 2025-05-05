class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> count;
        for (int card : deck) {
            count[card]++;
        }

        int gcd = 0;
        for (auto& pair : count) {
            gcd = std::gcd(gcd, pair.second);
        }

        return gcd >= 2;
    }
};