class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> res;
        for(string s : tokens)
        {
            if (s == "+" || s == "-" || s == "*" || s == "/")
            {
                int tmp1 = res.top();
                res.pop();
                int tmp2 = res.top();
                res.pop();
                if (s == "+")
                    res.push(tmp1 + tmp2);
                else if (s == "-")
                    res.push(tmp2 - tmp1);
                else if (s == "*")
                    res.push(tmp2 * tmp1);
                else
                    res.push(tmp2 / tmp1);
            }
            else
                res.push(stoi(s));
        }
        return (res.top());
    }
};