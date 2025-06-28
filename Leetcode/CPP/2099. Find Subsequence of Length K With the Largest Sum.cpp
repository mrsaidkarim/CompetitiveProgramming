class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> tmp = nums;
        sort(nums.begin(), nums.end());

        nums.resize(tmp.size() - k);
        vector<int> res;
        for (int i = 0; i < tmp.size(); i++)
        {
            auto it = find(nums.begin(), nums.end(), tmp[i]);
            if (it == nums.end())
                res.push_back(tmp[i]);
            else
                nums.erase(it);
        }
        return (res);
    }
};