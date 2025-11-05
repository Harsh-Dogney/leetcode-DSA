class Solution {
public:
    int maxArea(vector<int>& h) {
    int n = h.size();
    int maxArea=0;
    int i=0,j=n-1;
    while(i<j){
        int w =j-i;
        int height = min(h[i],h[j]);
        int a= w*height;
        maxArea = max(a,maxArea);
        if(h[i]<=h[j]){
            i++;
        }else{
            j--;
        }
    }
    return maxArea;
    }
};