class Solution {
public:
    /*bool var(vector<int>& height)
    {
        for(int i = 0; i < height.size(); i++)
            if(height[i] != 0)
                return 1;
        return 0;
    }
    void minus1(vector<int>& height)
    {
        for (auto i : height)
            --i;
    }
    int trap(vector<int>& height) {
        int result = 0;
        while(var(height))
        {
            int P1 = 0, P2 = 0;
            for(int i = 0; i < height.size(); i++)
            {
                if(height[i] != 0)
                {
                    P1 = i;
                    P2 = i;
                    break;
                }
            }
            for(int i = 0; i < height.size(); i++)
            {
                if(height[i] == 0)
                    continue;
                result = result + (P2 - P1 - 1);
                P1 = P2;
            }
            minus1(height);
        }
        return result;
    }*/ // code trên đúng nhưng quá giới hạn thời gian// upper code is appropriate but time exceeded
    int trap(vector<int>& height) {
        int trapped = 0;
        int l_p = 0;
        int r_p = height.size() - 1;
        int l_max = INT_MIN;
        int r_max = INT_MIN;
        while (l_p != r_p)
        {
            l_max = max(l_max, height[l_p]);
            r_max = max(r_max, height[r_p]);
            trapped += (l_max < r_max) ? (l_max - height[l_p++]) : (r_max - height[r_p--]) ;
        }
        return trapped;
    }
};