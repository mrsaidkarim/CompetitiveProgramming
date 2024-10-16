class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        priority_queue<pair<int, char>> max_heap;
        string res;
        if (a)
            max_heap.push({a, 'a'});
        if (b)
            max_heap.push({b, 'b'});
        if (c)
            max_heap.push({c, 'c'});
        while (!max_heap.empty())
        {
            auto tmp = max_heap.top();
            max_heap.pop();
            if (res.size() > 1 && res[res.size() - 1] == tmp.second && res[res.size() - 2] == tmp.second)
            {
                if (max_heap.empty())
                    break;
                auto tmp2 = max_heap.top();
                max_heap.pop();
                res.push_back(tmp2.second);
                if (tmp2.first > 1)
                {
                    tmp2.first--;
                    max_heap.push(tmp2);
                }
                max_heap.push(tmp);
            }
            else
            {
                res.push_back(tmp.second);
                if (--tmp.first > 0)
                    max_heap.push(tmp);
            }
        }
        return (res);
    }
};