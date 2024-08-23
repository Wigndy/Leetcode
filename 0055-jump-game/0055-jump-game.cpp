class Solution {
public:
    bool canJump(vector<int>& nums) {
        int dest = nums.size() - 1;
        for(int i = dest - 1; i >= 0; i--){
            if(i + nums[i] >= dest)
                dest = i;
        }
        return dest == 0;
    }
};