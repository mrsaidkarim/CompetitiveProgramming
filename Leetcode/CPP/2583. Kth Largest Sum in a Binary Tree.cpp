/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    #define ll long long
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<ll, vector<ll>, greater<ll>> min_heap;
        queue<TreeNode*> q;

        q.push(root);
        while (!q.empty())
        {
            ll levelSum = 0;
            int size = q.size();
            for(int i = 0; i < size; i++)
            {
                TreeNode *curr = q.front();
                q.pop();
                levelSum += curr->val;
                if (curr->left) q.push(curr->left);
                if (curr->right) q.push(curr->right);
            }
            min_heap.push(levelSum);
            if (k < min_heap.size())
                min_heap.pop();
        }
        if (k > min_heap.size())
                return (-1);
        else
            return (min_heap.top());
    }
};