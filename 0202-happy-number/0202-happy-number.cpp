class Solution {
public:
    bool isHappy(int n) {
        if(n < 0)
            return false;
        while(n > 9){
            int temp = 0;
            while(n != 0){
                int lastdigit = n % 10;
                n /= 10;
                temp += (lastdigit * lastdigit);
            }
            n = temp;
        }
        return (n == 1 || n == 7)? true :false;
    }
};