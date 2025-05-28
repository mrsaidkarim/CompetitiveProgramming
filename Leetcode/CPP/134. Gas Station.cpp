class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int> diff(gas.size());
        int tank = 0;
        int next;
        for (int i = 0; i < gas.size(); i++)
        {
            diff[i] = gas[i] - cost[i];
        }
        int j;
        for (int i = 0; i < diff.size(); i++)
        {
            tank = 0;
            if (diff[i] > 0)
            {
                j = i;
                while (j < diff.size())
                {
                    tank += diff[j];
                    if (tank < 0)
                        break;
                    j++;
                }
                if (j == diff.size())
                {
                    j = 0;
                    while (j < i)
                    {
                        tank += diff[j];
                        if (tank < 0)
                            break;
                        j++;
                    }
                    if (j == i)
                        return (j);
                    if (j < i)
                        return (-1);
                    else
                        i = j;
                }
            }
            else if (diff[i] == 0 && diff.size() == 1)
                return (i);
            
        }
        return (-1);
    }
};