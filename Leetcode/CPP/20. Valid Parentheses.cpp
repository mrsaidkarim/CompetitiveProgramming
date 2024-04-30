class Solution {
public:
    bool isValid(string s) {
        stack<char> open;
        unordered_map<char, char> brackets = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };
        for (char c : s)
        {
            if (brackets.find(c) != brackets.end())
            {
                if (open.empty())
                    return (false);
                if (open.top() != brackets[c])
                    return (false);
                open.pop();
            }
            else
                open.push(c);
        }
        return (open.empty());
    }
};