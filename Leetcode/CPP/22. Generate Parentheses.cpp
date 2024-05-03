class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;

        ft_generate_comb(n, 0, 0, "", res);
        return (res);
    }
private:
    void    ft_generate_comb(int n, int i, int j, string str, vector<string> &tab)
    {
        if (i == n && j == n)
        {
            tab.push_back(str);
            return ;
        }
        if (i < n)
        {
            ft_generate_comb(n, i + 1, j, str + '(', tab);
        }
        if (j < i)
        {
            ft_generate_comb(n, i, j + 1, str + ')', tab);
        }
    }
};