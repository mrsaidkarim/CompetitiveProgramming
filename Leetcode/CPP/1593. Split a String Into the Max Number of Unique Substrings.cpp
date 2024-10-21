class Solution {
    void check(int &res, string &s, int pos, unordered_set<string> &subs)
    {
        if (pos == s.size())
        {
            if (res < subs.size())
                res = subs.size();
            return ;
        }
        string currentsub;
        for (int i = pos; i < s.size(); i++)
        {
            currentsub.push_back(s[i]);
            if (subs.count(currentsub) == 0)
            {
                subs.insert(currentsub);
                check(res, s, i + 1, subs);
                subs.erase(currentsub);
            }
        }
    }
public:
    int maxUniqueSplit(string s) {
        unordered_set<string> subs;
        int res = 0;
        check(res, s , 0, subs);
        return (res);
    }
};