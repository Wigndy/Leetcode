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
};