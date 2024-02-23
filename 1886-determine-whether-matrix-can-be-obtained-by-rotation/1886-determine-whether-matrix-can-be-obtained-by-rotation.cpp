class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        //bool ans[4];
        //ans[0] = 1; ans[1] = 1; ans[2] = 1; ans[3] = 1;
        vector<int>ans(4,true);
        int n = mat.size();
        for (int i = 0; i < n; i ++)
            for(int j = 0; j < n; j ++)
            {
                if(mat[i][j] != target[i][j])
                    ans[0] = 0;
                if(mat[i][j] !=target[n - j - 1][i])
                    ans[1] = 0;
                if(mat[i][j] !=target[n - i - 1][n - j - 1])
                    ans[2] = 0;
                if(mat[i][j] !=target[j][n - i - 1])
                    ans[3] = 0;
            }
        return ans[0] || ans[1] || ans[2] || ans[3];
    }
};