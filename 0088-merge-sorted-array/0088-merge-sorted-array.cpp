class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int arr3[m + n];
        int l = 0;
        int r = 0;
        int index = 0;

        while (l < m && r < n) {
            if (nums1[l] < nums2[r]) {
                arr3[index] = nums1[l];
                l++;
                index++;
            } else {
                arr3[index] = nums2[r];
                r++, index++;
            }
        }

    while (l < m) {
            arr3[index++] = nums1[l++];
        }

        // Copy remaining elements of nums2, if any
        while (r < n) {
            arr3[index++] = nums2[r++];
        }

        // Copy merged array back into nums1
        for (int i = 0; i < m + n; i++) {
            nums1[i] = arr3[i];
        }
    }
};