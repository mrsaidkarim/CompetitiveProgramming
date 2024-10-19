class Solution {
public:
    string rev_invert(string s)
    {
        string res;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                res += '1';
            else
                res += '0';
        }
        reverse(res.begin(), res.end());
        return (res);
    }
    char findKthBit(int n, int k) {
        string s = "0";
        while (--n > 0)
        {
            s += "1" + rev_invert(s);
        }
        return (s[k - 1]);
    }
};