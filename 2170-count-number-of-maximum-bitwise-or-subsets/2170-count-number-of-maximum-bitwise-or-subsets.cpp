class Solution {
public:

    int countSubsets(int idx,int currOr,vector<int>& nums,int maxOr){
        if(idx==nums.size()){
            if(currOr==maxOr){
                return 1;
            }
            return 0;
        }
        int takecount = countSubsets(idx+1,currOr |nums[idx],nums,maxOr);
        int nottakecount =countSubsets(idx+1,currOr,nums,maxOr);

        return takecount + nottakecount;
    }

    int countMaxOrSubsets(vector<int>& nums) {
    int n =nums.size();
    int maxOr=0;
    for(int i =0;i<n;i++){
        maxOr |=nums[i];
    }
    int currOr=0;
    return countSubsets(0,currOr,nums,maxOr);
    }
};