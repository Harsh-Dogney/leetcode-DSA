class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(),g.end());
    int n= g.size();
    int m=s.size();
    sort(s.begin(),s.end());
    int l=0;
    int r=0;
    while(l<m && r<n ){
        if(g[r]<=s[l]){
            r=r+1;
        }
        l=l+1;
    }
    return r;
     
    }
};