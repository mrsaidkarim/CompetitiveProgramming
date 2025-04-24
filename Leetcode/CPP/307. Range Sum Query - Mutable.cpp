class NumArray {
    private:
        vector<int> tree;
        vector<int> nums;
        int build(int index, int left, int right)
        {
            if (left == right)
            {
                tree[index] = nums[left];
                return tree[index];
            }
            int mid = (left + right) / 2;
            tree[index] = build(2 * index + 1, left, mid) + build(2 * (index + 1), mid + 1, right);
            return tree[index];
        }
    
        void updateTree(int numsindex, int treeindex, int left, int right, int diff)
        {
            if (numsindex < left || numsindex > right)
                return ;
            tree[treeindex] += diff;
            if (left != right)
            {
                int mid = (left + right) / 2;
                updateTree(numsindex, treeindex * 2 + 1, left, mid, diff);
                updateTree(numsindex, 2 * (treeindex + 1), mid + 1, right, diff);
            }
        }
        int sumTree(int from, int to, int left, int right, int index)
        {
            if (to < left || from > right)
                return (0);
            if (from <= left && to >= right)
                return (tree[index]);
            int mid = (left + right) / 2;
            return (sumTree(from, to, left, mid, index * 2 + 1)
                    + sumTree(from, to, mid + 1, right, 2 * index + 2));
        }
    
    public:
        NumArray(vector<int>& nums) {
            this->nums = nums;
            tree.resize(nums.size() * 4);
            build(0, 0, nums.size() - 1);
        }
        
        void update(int index, int val) {
            updateTree(index, 0, 0, nums.size() - 1, val - nums[index]);
        }
        
        int sumRange(int left, int right) {
            return sumTree(left, right, 0, nums.size() - 1, 0);
        }
    };
    
    /**
     * Your NumArray object will be instantiated and called as such:
     * NumArray* obj = new NumArray(nums);
     * obj->update(index,val);
     * int param_2 = obj->sumRange(left,right);
     */