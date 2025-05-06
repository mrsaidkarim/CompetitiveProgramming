class Solution {
    public:
        vector<int> divide(vector<int> &nums)
            {
                if (nums.size() <= 1)
                    return (nums);
                int mid = nums.size() / 2;
                vector<int> left(nums.begin(), nums.begin() + mid);
                vector<int> right(nums.begin() + mid, nums.end());
               
                return (sort(divide(left), divide(right)));
            }
            vector<int> sort(vector<int> l, vector<int> r)
            {
                int i = 0, j = 0;
                vector<int> res;
        
                while (i < l.size() && j < r.size())
                {
                    if (l[i] < r[j])
                        res.push_back(l[i++]);
                    else
                        res.push_back(r[j++]);
                }
                while (i < l.size())
                    res.push_back(l[i++]);
                while (j < r.size())
                    res.push_back(r[j++]);
                return (res);
            }
        vector<int> sortArray(vector<int>& nums) {
            return (divide(nums));
        }
    };