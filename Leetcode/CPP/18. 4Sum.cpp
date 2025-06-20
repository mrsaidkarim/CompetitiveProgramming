class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        long long remaining;
        int n = nums.size();
        int left, right;
        for (int i = 0; i < n - 3; i++)
        {
            cout << "here";
            if (i > 0 && nums[i] == nums[i - 1])
                continue ;
            for (int j = i + 1; j < n - 2; j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue ;
                remaining = (long long)target - nums[i] - nums[j];
                left = j + 1;
                right = n - 1;
                while (left < right)
                {
                    if (nums[left] + nums[right] == remaining)
                    {
                        res.push_back({nums[i], nums[j], nums[left], nums[right]});
                        while (left < right && nums[left] == nums[left + 1])
                            left++;
                        while (left < right && nums[right] == nums[right - 1])
                            right--;
                        left++;
                        right--;
                    }
                    else if (nums[left] + nums[right] > remaining)
                        right--;
                    else
                        left++;
                }
            }
        }
        return (res);
    }
};