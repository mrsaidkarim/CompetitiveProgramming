class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numbers;
        int max_length = 0;

        for(int num : nums)
            numbers.insert(num);
        for(int i = 0; i < nums.size(); i++)
        {
            int current_length = 1;
            int num = nums[i];
            if (numbers.find(num - 1) == numbers.end())
            {
                while (numbers.find(num + 1) != numbers.end())
                {
                    num += 1;
                    current_length += 1;
                }
            }
            max_length = max(max_length, current_length);
        }
        return (max_length);
    }
};