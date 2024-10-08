class Solution {
public:
    int minSwaps(string s) {
        int closed = 0;
        int closed_max = 0;
        for (char c : s)
        {
            if (c == ']')
                closed++;
            else
                closed--;
            if (closed > closed_max)
                closed_max = closed;
        }
        return ((closed_max + 1)/2);
    }
};