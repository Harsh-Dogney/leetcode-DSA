class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
    int n = nums.size();
        if (n < 3) return 0; 

        long long maxA_B = 0, maxTriplet = 0;
        int maxA = nums[0];

        for (int j = 1; j < n - 1; j++) {
            maxA_B = max(maxA_B, (long long)(maxA - nums[j]));
            maxTriplet = max(maxTriplet, maxA_B * nums[j + 1]);
            maxA = max(maxA, nums[j]); // Update maxA
        }
        return maxTriplet;


   
    }
};