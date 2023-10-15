class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int m = nums1.length;
        int n = nums2.length;
        int tab[] = new int[n + m];
        int i = 0, j = 0, k = 0;
        while (i < m && j < n)
        {
            if (nums1[i] < nums2[j])
                tab[k] = nums1[i++];
            else
                tab[k] = nums2[j++];
            k++;
        }
        while (i < m)
        {
            tab[k] = nums1[i++];
            k++;
        }
        while (j < n)
        {
            tab[k] = nums2[j++];
            k++;
        }
        int mid = (n + m) / 2;
        if ((n + m) % 2 == 1)
            return tab[mid];
        else
            return (tab[mid] + tab[mid - 1]) / 2.0;
    }
}
