class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> tri(numRows);

        tri[0].resize(1);
        tri[0][0] = 1;

        if (numRows > 1) {
            tri[1].resize(2);
            tri[1][0] = 1;
            tri[1][1] = 1;
        }

        for (int i = 2; i < numRows; i++) {
            tri[i].resize(i + 1);
            tri[i][0] = 1;
            tri[i][i] = 1;
            for (int j = 1; j <= i - 1; j++) {
                tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
            }
        }

        return tri;
    }
};