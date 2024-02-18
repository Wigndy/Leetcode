class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x != 0 && x % 10 == 0)) return 0;
        long temp = x;
        long converse = 0;
        int digit = 0;
        while(temp != 0)
        {
            digit = temp % 10;
            converse = converse * 10 + digit;
            temp /= 10;
        }
        return (converse == x);
    }
};