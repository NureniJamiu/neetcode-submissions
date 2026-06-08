class NumMatrix {
private:
    vector<vector<int>> prefixSum;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        int ROWS = matrix.size();
        int COLS = matrix[0].size();

        prefixSum = vector<vector<int>>(ROWS+1, vector<int>(COLS+1, 0));

        for (int r = 0; r < ROWS; r++) {
            int prefix = 0;
            for (int c = 0; c < COLS; c++) {
                prefix += matrix[r][c];
                int top = prefixSum[r][c+1];
                prefixSum[r+1][c+1] = prefix + top;
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++; col1++; row2++; col2++;
        
        int bottomRight = prefixSum[row2][col2];
        int top = prefixSum[row1 - 1][col2];
        int left = prefixSum[row2][col1 - 1];
        int topLeft = prefixSum[row1 - 1][col1 - 1];

        return bottomRight - top - left + topLeft;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */