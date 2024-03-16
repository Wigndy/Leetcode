class Solution {
public:
    int climbStairs(int n) {
        vector<int> counter(n + 1, 0);
        counter[0] = 1;
        counter[1] = 1;
        for (int i = 2; i <= n; i ++)
        {
            counter[i] = counter[i - 2] + counter[i - 1];
        }
        return counter[n];
        }// like the fibonanci 
};