
class Solution {
public:
    int maxWidthRamp(std::vector<int>& nums) {
        std::stack<int> s;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            if (s.empty() || nums[s.top()] > nums[i]) {
                s.push(i);
            }
        }
        
        int maxWidth = 0;
        for (int j = n - 1; j >= 0; --j) {
            while (!s.empty() && nums[s.top()] <= nums[j]) {
                maxWidth = std::max(maxWidth, j - s.top());
                s.pop();
            }
        }
        
        return maxWidth;
    }
};