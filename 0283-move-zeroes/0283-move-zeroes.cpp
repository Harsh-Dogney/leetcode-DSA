class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int n =nums.size();
    int low =0;
    for(int h=0;h<n;h++){
        if(nums[h]!=0){
            swap(nums[low++],nums[h]);
        }
    }    
    }
};