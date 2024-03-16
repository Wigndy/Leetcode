class Solution {
public:
    int romanToInt(string s) {
        const char * c = s.c_str();
        int nums = strlen(c);
        int result = 0;
        char Symbol[8] = "IVXLCDM";
        int temp_pre = 0;
        for (int count = nums - 1; count >= 0; count--)
        {
            int temp = 0;
            if(s[count] == Symbol[0] )
                temp += 1;
            if(s[count] == Symbol[1] )
                temp += 5;
            if(s[count] == Symbol[2] )
                temp += 10;
            if(s[count] == Symbol[3] )
                temp += 50;
            if(s[count] == Symbol[4] )
                temp += 100;
            if(s[count] == Symbol[5] )
                temp += 500;
            if(s[count] == Symbol[6] )
                temp += 1000;
            if (temp_pre > temp)
                result -= temp;
            else
                result += temp;
            temp_pre = temp;
        }
        return result;
    }
};