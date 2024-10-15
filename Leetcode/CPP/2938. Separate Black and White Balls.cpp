class Solution {
public:
    long long minimumSteps(string s) {
       long long res = 0;
       int index0 = 0;

       for (int i = 0; i < s.length(); i++)
       {
            if (s[i] == '0')
            {
                res += i - index0;
                index0++;
            }
       }
       return (res);
    }
};