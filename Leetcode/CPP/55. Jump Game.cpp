class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i = 1;
        int steps =  nums[0] - 1;
        if (nums.size() == 1)
            return (true);
        if (steps == -1)
            return (false);
        while (i < nums.size())
        {
            if(i == nums.size() - 1)
                return (true);
            if (steps == 0 && nums[i] == 0)
                return (false);
            if (nums[i] > steps)
                steps = nums[i] - 1;
            else
                steps--;
            i++;
        }
        return (false);
    }
};