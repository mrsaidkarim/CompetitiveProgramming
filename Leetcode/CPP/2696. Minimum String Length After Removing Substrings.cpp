class Solution {
public:
    int minLength(string s) {
        int check = 1;
        vector<char> st;
        int i = 0;
        while (i < s.length())
        {
            if (s[i] == 'A' && i != s.length() - 1 && s[i + 1] == 'B')
                i+=2;
            else if (s[i] == 'C' && i != s.length() - 1 && s[i + 1] == 'D')
                i+=2;
            else
            {
                st.push_back(s[i]);
                i++;
            }
            
        }
        while (check)
        {
            check = 0;
            for (int i = 0; i < st.size() - 1 && st.size() != 0; i++)
            {
                if (st[i] == 'A' && st[i + 1] == 'B')
                {
                    st.erase(st.begin() + i);
                    st.erase(st.begin() + i);
                    check = 1;
                    break;
                }
                else if (st[i] == 'C' && st[i + 1] == 'D')
                {
                    st.erase(st.begin() + i);
                    st.erase(st.begin() + i);
                    check = 1;
                    break;
                }
            }
        }
        return (st.size());
    }
};