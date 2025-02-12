class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& g) {
        vector<int> mp(g.size()*g.size()+1,0);
        vector<int> a(2,0);
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g.size();j++){
                mp[g[i][j]]++;
            }
        }
        for(int i=1;i<mp.size();i++){
            if(mp[i] == 2) a[0] = i;
            else if(mp[i] == 0) a[1] = i;
        }
        return a;
    }
};