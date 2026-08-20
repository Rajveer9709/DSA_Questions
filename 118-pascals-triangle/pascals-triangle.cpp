// class Solution {
// public:
//     vector<vector<int>> generate(int numRows) {

//         vector<vector<int>> tri(numRows);

//         tri[0].resize(1);
//         tri[0][0] = 1;

//         if (numRows > 1) {
//             tri[1].resize(2);
//             tri[1][0] = 1;
//             tri[1][1] = 1;
//         }

//         for (int i = 2; i < numRows; i++) {
//             tri[i].resize(i + 1);
//             tri[i][0] = 1;
//             tri[i][i] = 1;
//             for (int j = 1; j <= i - 1; j++) {
//                 tri[i][j] = tri[i - 1][j - 1] + tri[i - 1][j];
//             }
//         }

//         return tri;
//     }
// };


class Solution {
    vector<int> findRow(int row)
    {
        long long ans=1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col=1;col<row;col++)
        {
            ans=ans*(row-col);
            ans=ans/col;
            ansRow.push_back(ans);
        }
        return ansRow;

    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        for(int i=1;i<=numRows;i++)
        {
            pascal.push_back(findRow(i));
        }
        return pascal;
    }
};