class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int total = n + m;
        vector<int> tab(total);
        int k,i,j;
        i = 0;
        j = 0;
        k = 0;

        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j])
                tab[k++] = nums1[i++];
            else
                tab[k++] = nums2[j++];
        }
        while (i < m)
        {
            tab[k++] = nums1[i++];
        }
        while (j < n)
        {
            tab[k++] = nums2[j++];
        }
        int mid = total / 2;
        if(total % 2)
            return tab[mid];
        else
            return (tab[mid] + tab[mid - 1]) / 2.0;
    }
};
