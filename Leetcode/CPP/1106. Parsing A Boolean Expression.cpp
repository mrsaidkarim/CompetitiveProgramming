class Solution {
private:
    void check(stack<char> &oprt, stack<char> &values)
    {
        bool ans;
        if (oprt.top() == '&')
        {
            ans = true;
            while (values.top() != '(')
            {
                ans &= (values.top() == 't');
                values.pop();
            }
            values.pop();
        }
        else if (oprt.top() == '|')
        {
            ans = false;
            while (values.top() != '(')
            {
                ans |= (values.top() == 't');
                values.pop();
            }
            values.pop();
        }
        else
        {
            ans = (values.top() == 't');
            ans = !ans;
            values.pop();
            values.pop();
        }
        oprt.pop();
        if (ans == true)
            values.push('t');
        else
            values.push('f');
    }
public:
    bool parseBoolExpr(string str) {
        stack<char> oprt, values;

        for (char c: str)
        {
            if (c == '|' || c == '&' || c == '!')
                oprt.push(c);
            else if (c == 'f' || c == 't' || c == '(')
                values.push(c);
            else if (c == ')')
                check(oprt, values);
        }
        return (values.top() == 't');
    }
};