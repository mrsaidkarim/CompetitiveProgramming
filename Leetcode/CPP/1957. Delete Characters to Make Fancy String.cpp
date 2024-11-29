class Solution {
public:
    string makeFancyString(string s) {
        string res = "";
        if (s[0])
            res += s[0];
        if (s[1])
            res += s[1];
        for(int i = 2; i < s.length(); i++)
        {
            if (s[i] != s[i - 1] || s[i] != s[i - 2])
                res += s[i];
        }
        return (res);
    }
};