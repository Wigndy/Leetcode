class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        //The big brained concept here seems to be this:

        /*If the array is sorted alphabetically then you can assume that the first element of the array and the last element of the array will have most different prefixes of all comparisons that could be made between strings in the array. If this is true, you only have to compare these two strings.*/
        std ::string res ="";
        sort(strs.begin(), strs.end());
        int n = strs.size();
        std :: string start = strs[0], end =strs[n - 1];
        for(int i = 0; i < min(start.length(),end.length()); i++)
        {
            if(start[i] != end[i])
                return res;
            res += start[i];
        }
        return res;
        



        
      /*  
        std :: string s = "";
        
        
        for (int i = 0; i < strs[0].length(); i++) {
            
            for (int j = 1; j < strs.size(); j++) {
                
                if (i >= strs[j].length() || strs[j][i] != strs[0][i]) {
                    
                    return s;
                }
            }
           
            s += strs[0][i];
        }

        return s;*/
    }
};