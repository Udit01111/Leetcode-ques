class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> result = prices; // Start with original prices
        stack<int> st; // Monotonic decreasing stack (stores indices)

        for (int i = 0; i < n; ++i) {
            while (!st.empty() && prices[st.top()] >= prices[i]) {
                result[st.top()] -= prices[i]; // Apply discount
                st.pop(); // Remove processed index
            }
            st.push(i); // Store index
        }
        
        return result;
    }
};
