class Solution {
public:
    static bool cmp(int a, int b)
    {
        return (a > b);
    }
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(trainers.begin(), trainers.end(), cmp);
        sort(players.begin(), players.end(),cmp);
        int res = 0;
        int j = 0;
        for (int i = 0; i < players.size() && j < trainers.size(); i++)
        {
            if (players[i] <= trainers[j])
            {
                j++;
                res++;
            }
        }
        return (res);
    }
};