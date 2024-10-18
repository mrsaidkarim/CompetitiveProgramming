class Solution {
private:
    int res = 0;
    int max = 0;
public:
    int countMaxOrSubsets(vector<int>& nums) {
        for (auto num : nums)
            max |= num;
        backtrack(nums, 0, 0);
        return (res);
    }
    void backtrack(vector<int>& nums, int start, int value)
    {
        if (value == max)
            res++;
        for (int i = start; i < nums.size(); i++)
        {
            backtrack(nums, i + 1, value | nums[i]);
        }
    }
};