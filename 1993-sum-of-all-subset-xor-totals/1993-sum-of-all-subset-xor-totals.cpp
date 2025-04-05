class Solution {
public:
    int dfs(vector<int>& nums, int index, int currentXor) {
        if (index == nums.size()) {
            return currentXor;
        }

        // Include nums[index]
        int withElement = dfs(nums, index + 1, currentXor ^ nums[index]);
        
        // Exclude nums[index]
        int withoutElement = dfs(nums, index + 1, currentXor);

        return withElement + withoutElement;
    }

    int subsetXORSum(vector<int>& nums) {
        return dfs(nums, 0, 0);
    }
};
