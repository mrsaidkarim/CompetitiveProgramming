class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mymap;
        
        for(int i = 0; i < nums.size(); i++)
        {
            int x = target - nums[i];
            if (mymap.find(x) != mymap.end())
            {
                return {mymap[x], i};
            }
            mymap[nums[i]] = i;
        }
        return {};
    }
};
