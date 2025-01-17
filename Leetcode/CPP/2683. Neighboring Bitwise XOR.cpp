class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int tmp = 0;
        for (int element: derived)
            tmp ^= element;
        return (tmp == 0);
    }
};