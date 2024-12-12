class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int left = 0;
        int right = 0;
        int res = 0, window_size = 0;
        while (right < nums.size())
        {
            // window_size = 0;
            while (right < nums.size() && (nums[right] - nums[left]) <= 2 * k)
            {
                window_size++;
                right++;
            }
            if (res < window_size)
                res = window_size;
            left++;
            window_size--;
            // cout << res;
        }
        return (res);
    }
};