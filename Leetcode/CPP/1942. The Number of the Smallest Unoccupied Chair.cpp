class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        vector<pair<int, pair<int, int>>> all;
        for (int i = 0; i < times.size(); i++)
        {
            all.push_back({times[i][0], {times[i][1], i}});
        }
        sort(all.begin(), all.end());
        vector<int> chairs(times.size(), -1);
        for(int i = 0; i < times.size(); i++)
        {
            for(int j = 0; j < times.size(); j++)
            {
                if (all[i].first >= chairs[j])
                {
                    chairs[j] = all[i].second.first;
                    if (targetFriend == all[i].second.second)
                        return (j);
                    break;
                }
            }
        }
        return (0);
    }
};