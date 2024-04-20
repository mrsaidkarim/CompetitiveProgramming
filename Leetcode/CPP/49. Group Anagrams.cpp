class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> result;
        for(string s: strs)
        {
            m[regular_string(s)].push_back(s);
        }
        for (auto test = m.begin(); test != m.end(); test++)
        {
            result.push_back(test->second);
        }
        return (result);
    }
private:
    string  regular_string(string str)
    {
        vector<int> tab(26);

        for(char c: str)
        {
            tab[c - 'a']++;
        }
        string res = "";
        for(int i = 0; i < 26; i++)
        {
            res.append(to_string(tab[i]) + ",");
        }
        return res;
    }
};