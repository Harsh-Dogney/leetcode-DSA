class Solution {
public:
    int maxArea(vector<int>& height) {
    int n =height.size(),s=0,e=n-1;
    int maxarea=0;
    
    while(s<e){
        int lh =height[s];
        int rh =height[e];
        int min_h =min(lh,rh);
        maxarea = max(maxarea,min_h*(e-s));
        if(lh < rh) s++; // move the pointer with smaller height
            else e--;
        
    } 
    return maxarea  ;
    }
};