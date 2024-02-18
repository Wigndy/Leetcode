class Solution {
public:
    bool isPalindrome(int x) {
        std::string string_x = std::to_string(x);
        int left_index = 0;
        int right_index = string_x.length() - 1;

        while (left_index < right_index){
            if (string_x[left_index] != string_x[right_index]){
                return false;
            }
            left_index++;
            right_index--;
        }
        return true;
    }
};