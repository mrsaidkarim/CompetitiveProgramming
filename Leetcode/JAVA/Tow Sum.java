class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> mymap = new HashMap<> ();
        for(int i = 0; i < nums.length; i++)
        {
            int x = target - nums[i];
            if(mymap.get(x) != null)
            {
                return new int[] {mymap.get(x), i};
            }
            else
            {
                mymap.put(nums[i], i);
            }
        }
        return new int[] {-1, -1};
    }
}
