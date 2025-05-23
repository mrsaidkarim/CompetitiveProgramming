class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int right = nums.size() - 1;
            int left = 0;
            int mid;
            
            while (left <= right)
            {
                mid = left + (right - left) / 2;
                if (nums[mid] == target)
                    return mid;
                if (nums[mid] >= nums[left])
                {
                    if (target > nums[mid] || target < nums[left])
                        left = mid + 1;
                    else
                        right = mid - 1;
                }
                else
                {
                    if (target >= nums[mid] && target <= nums[right])
                        left = mid + 1;
                    else
                        right = mid - 1;
                }
            }
            return (-1);
        }
    };