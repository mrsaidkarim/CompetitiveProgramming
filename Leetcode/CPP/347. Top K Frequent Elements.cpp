using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        vector<int> result;

        for(int num : nums)
        {
            m[num]++;
        }

        vector<vector<int>> tab(nums.size() + 1);
        for (auto pair = m.begin(); pair != m.end(); pair++)
        {
            tab[pair->second].push_back(pair->first);
        }
        for(int i = nums.size(); i >= 0 && result.size() < k; i--)
        {
            if (!tab[i].empty())
                result.insert(result.end(), tab[i].begin(), tab[i].end());
        }
        return (result);
    }
};