class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set<int> seen_numbers;

        for(int element: arr)
        {
            if (seen_numbers.count(element * 2) or (element % 2 == 0 and seen_numbers.count(element / 2)))
                return (true);
            seen_numbers.insert(element);
        }
        return (false);
    }
};