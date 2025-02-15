class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int n=nums.size(),s=1,e=1;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        if(s==0)s=1;
        if(e==0)e=1;

        s=s*nums[i];
        e=e*nums[n-i-1];
        
        maxi=max(maxi,max(s,e));
    }  
    return maxi;
    }
};