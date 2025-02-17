class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int n=nums.size();
    int longest=1,cnt=0,lastSmaller=INT_MIN;
    sort(nums.begin(),nums.end());
    if(n==0)return 0;
    for(int i=0;i<n;i++){
        if(nums[i]-1==lastSmaller){
            cnt=cnt+1;
            lastSmaller=nums[i];
        }
        else if( nums[i] != lastSmaller){
            cnt = 1;
            lastSmaller =nums[i];
        }
        longest=max(longest,cnt);
    }
    return longest;   
    }
};