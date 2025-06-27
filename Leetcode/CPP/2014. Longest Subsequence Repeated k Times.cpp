class Solution {
public:
    int countrepitions(string &s, string &sub)
    {
        int i = 0;
        int count = 0;
        int j = 0;
        while (i < s.size())
        {
            if (s[i] == sub[j])
            {
                j++;
                if (j == sub.size())
                {
                    j = 0;
                    count++;
                }
            }
            i++;
        }
        return (count);
    }
    string longestSubsequenceRepeatedK(string s, int k) {
        vector<int> letters(26);
        for (int i = 0; i < s.size(); i++)
            letters[s[i] - 'a']++;
        
        queue<string> q;
        string curr = "";
        string res = "";
        q.push(curr);
        while (!q.empty())
        {
            curr = q.front();
            q.pop();
            for (char c = 'a'; c <= 'z'; c++)
            {
                curr.push_back(c);
                if (countrepitions(s, curr) >= k)
                {
                    res = curr;
                    q.push(curr);
                }
                curr.pop_back();
            }
        }
        return (res);
    }
};