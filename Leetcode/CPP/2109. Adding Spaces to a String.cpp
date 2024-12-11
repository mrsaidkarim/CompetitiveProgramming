class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int k = 0;
        string res;
        for(int i = 0; i < s.size(); i++)
        {
            if (k < spaces.size() && i == spaces[k])
            {
                k++;
                res += " ";
            }
            res += s[i];
        }
        return (res);
    }
};