class Solution {
public:
    int hammingWeight(uint32_t n) {
        /*int count = 0;
        while (n != 0)
        {
            count += (n % 2);
            n = n >> 1;
        }
        return count;*/ // my solution
        int count = 0;
        vector<int> v;
        while(n / 2 != 0) {
            v.push_back(n % 2);
            n /= 2;
        }
        v.push_back(n % 2);
        
        for(const auto& x : v)
            if(x == 1) 
                count++;
        return count;
    }
};