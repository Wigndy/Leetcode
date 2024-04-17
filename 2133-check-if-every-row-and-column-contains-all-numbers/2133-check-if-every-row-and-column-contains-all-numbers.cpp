class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        unordered_set<int> check1, check2;
        for (int i = 0; i < n; i ++)
        {
            for (int j = 0; j < n; j ++)
            {
                if (check1.find(matrix[i][j]) != check1.end())
                    return false;
                else 
                    check1.insert(matrix[i][j]);
                if (check2.find(matrix[j][i]) != check2.end())
                    return false;
                else 
                    check2.insert(matrix[j][i]);
            }
            check1.clear();
            check2.clear();
        }
        return true;
    }
};