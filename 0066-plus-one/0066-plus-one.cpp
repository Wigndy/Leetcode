class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        /*char additionalSum = 0;
        for (int i = digits.size() - 1; i >= 0; --i) {
            if(i == digits.size() - 1){
                digits[i] += 1;
            }
            else{
                digits[i] += additionalSum;
                additionalSum = 0;
            }
            if(digits[i] > 9){
                digits[i] %= 10;
                additionalSum = 1;
            }
            if(additionalSum == 1 && i == 0){
                digits.insert(digits.begin(), additionalSum);
            }
        }
        return digits;*/ // third solution referenced
        int idx = digits.size() - 1;
        while(idx >= 0)
        {
            if(digits[idx] == 9)
                digits[idx] = 0;
            else
            {
                digits[idx] ++;
                return digits;
            }
            idx--;
        }
        digits.insert(digits.begin(), 1);
        return digits; // second solution has been improved


       /* while(digits[nums] == 10 && nums > 0)
        {
            digits[nums] = 0;
            digits[nums - 1] ++;
            nums--;
        }
        if (digits[0] == 10)
        {
            digits.push_back(0);
            digits[0] = 1;
        }
        return digits;*/ // first solution here
    }

};