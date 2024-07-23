class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> meeting;
        for(int num: nums){
            if(meeting.count(num) > 0)
                return true;
            meeting.insert(num);
        } 
        return false;
    }
};