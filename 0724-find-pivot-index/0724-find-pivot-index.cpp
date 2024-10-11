class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>s(n,0);
        vector<int>e(n,0);
        int sum=0;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            s[i]=sum;
        }
        sum =0;
        for(int i=n-1;i>=0;i--){
            sum+=nums[i];
            e[i]=sum;
        }
        for(int i=0;i<n;i++){
            if(s[i]==e[i]) return i;
        }
        return -1;
    }
};