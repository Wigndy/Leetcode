class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> table;
        for (auto x : strs)
        {
            string word = x;
            sort(word.begin(), word.end());
            table[word].push_back(x);
        }
        vector<vector<string>> answer;
        for(auto x : table)
            answer.push_back(x.second);
        
        return answer;
    }

    /*
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> mp;
        vector<vector<string>> ans; 

        for (int i = 0; i < strs.size(); i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            if (mp.find(temp) != mp.end()) {
                ans[mp[temp]].push_back(strs[i]);
            } else {
                mp[temp] = ans.size();
                ans.push_back({strs[i]});
                
            }
        }

        return ans;
    }
    */ //chưa hiểu cách phân loại của thằng này lắm
};