class Solution {
public:
    bool check(vector<int>& nums) {
    int n= nums.size(),rotation=0;
    for(int i =1;i<n;i++)
        {if(nums[i]<nums[i-1]) rotation++;}
    if(nums[0]<nums[n-1]) rotation++;    
    
    
    return rotation <=1;
    }
};