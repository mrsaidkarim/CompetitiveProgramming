class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<double> min_heap;

        for (int i = 0; i < nums.size(); i++)
            min_heap.push(nums[i]);
        long long res = 0;
        long long tmp;
        for (int i = 0; i < k; i++)
        {
            tmp = min_heap.top();
            res += tmp;
            min_heap.pop();
            tmp = (tmp + 2) / 3;
            min_heap.push(tmp);
        }
        return (res);
    }
};