class Solution {
public:
    int maximumCount(vector<int>& nums) {
    int p=0;
    int n=0;
    int t=nums.size();
    for(int i=0;i<t;i++){
        if(nums[i]==0)continue;
        if(nums[i]<0){
            n++;
        }
        
        else p++;
        
    }   
    int ans=0;
    ans=max(p,n);
    return ans; 
    }
};