class Solution {
    public:
        int findPeakElement(vector<int>& nums) {
            int l = 0;
            int r = nums.size() - 1;
            int mid;
            if (nums.size() <= 2)
            {
                if (nums.size() == 2 && nums[1] > nums[0])
                    return (1);
                return (0);
            }
            while (l < r)
            {
                mid = (l + r) / 2;
                if (nums[mid] < nums[mid + 1])
                    l = mid + 1;
                else
                    r = mid;
            }
            return (l);
        }
    };