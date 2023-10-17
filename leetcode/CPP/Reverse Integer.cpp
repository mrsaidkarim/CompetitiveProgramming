class Solution {
public:
    int reverse(int x) {
        int res = 0;

        while (x)
        {
            int mod = x % 10;
            x /= 10;
            if (res > INT_MAX / 10 || (res == INT_MAX / 10 && mod > 7))
                return 0;
            if (res < INT_MIN / 10 || (res == INT_MIN / 10 && mod < -8))
                return 0;
            res = res * 10 + mod;
        }
        return res;
    }
};
