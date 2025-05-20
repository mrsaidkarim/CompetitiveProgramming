class Solution {
public:

    //state : 00 no color, 01 red, 10 green, 11 blue
    int MOD = 1e9+7;
    int mem[1000][1023];
    int count(int m, int n, int r, int c, int prev_state, int curr_state)
    {
        if (c == n)
            return (1);
        if (r == m)
            return (count (m, n, 0, c+1, curr_state, 0));
        if (r == 0 && mem[c][prev_state] != -1)
            return mem[c][prev_state];
        int up = curr_state & 3;
        int left = (prev_state >> ((m - 1 - r) * 2)) & 3;
        int ways = 0;
        for (int i = 1; i <= 3; i++) // i is for the color (i == 1) ==> color == red
        {
            if (i != up && i != left)
                ways = (ways + count (m, n, r+1, c, prev_state, (curr_state << 2) + i)) % MOD;
        }
        if (r == 0)
            mem[c][prev_state] = ways;
        return (ways);
    }
    int colorTheGrid(int m, int n) {
        memset(mem, -1, sizeof(mem));
        return (count(m, n, 0, 0, 0, 0));
    }
};