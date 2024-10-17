class Solution {
public:
    int maximumSwap(int num) {
        string digits = to_string(num);

        int index_max;
        int tmp;
        for(int i = 0; i < digits.size(); i++)
        {
            index_max = i;
            for (int j = i + 1; j < digits.size(); j++)
            {
                if (digits[index_max] <= digits[j])
                    index_max = j;
            }
            if (digits[i] < digits[index_max])
            {
                tmp = digits[i];
                digits[i] = digits[index_max];
                digits[index_max] = tmp;
                break ;
            }
        }
        return (stoi(digits));
    }
};