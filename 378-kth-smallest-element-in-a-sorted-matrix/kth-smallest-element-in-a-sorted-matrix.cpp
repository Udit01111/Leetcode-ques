class Solution {
public:
vector<int> RowMajor(const vector<vector<int>>& matrix, int n) {
    vector<int> row;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            row.push_back(matrix[i][j]);
        }
    }
    return row;
}

    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        vector<int> rowMajor = RowMajor(matrix, n);
        sort(rowMajor.begin(),rowMajor.end());
        return rowMajor[k-1];
    }
};