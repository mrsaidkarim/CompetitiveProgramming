class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size());
        int prefix;
        int postfix;

        prefix = 1;
        for(int i = 0; i < nums.size(); i++)
        {
            result[i] = prefix;
            prefix *= nums[i];
        }
        postfix = 1;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            result[i] *= postfix;
            postfix *= nums[i];
        }
        return (result);
    }
};