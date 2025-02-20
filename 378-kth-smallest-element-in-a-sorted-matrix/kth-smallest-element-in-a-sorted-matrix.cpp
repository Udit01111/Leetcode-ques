class Solution {
public:
vector<int> flattenRowMajor(const vector<vector<int>>& matrix, int n) {
    vector<int> flattened;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            flattened.push_back(matrix[i][j]);
        }
    }
    return flattened;
}

    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        vector<int> rowMajor = flattenRowMajor(matrix, n);
        sort(rowMajor.begin(),rowMajor.end());
        return rowMajor[k-1];
    }
};