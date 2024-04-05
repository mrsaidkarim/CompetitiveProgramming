class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> S, T;

        if (s.length() != t.length())
            return false;
        for (char c : s)
            S[c]++;
        for (char c : t)
            T[c]++;
        for (char c : s)
            if (S[c] != T[c])
                return (false);
        return (true);
    }
};