class Solution {
public:
    int longestSubsequence(string s, int k) {
        string res;
        int n = s.size() - 1;
        long long nbr = 0;
        long long helper = 1;
        while (n > -1)
        {
            nbr += (s[n] - '0') * helper;
            if (nbr > k)
                break;
            else
            {
                res += s[n];
                helper *= 2;
                n--;
                if (helper > k)
                    break ;
            }
        }
        while (n > -1)
        {
            if (s[n] != '1')
                res += s[n];
            n--;
        }
        cout << res;
        return (res.size());
    }
};