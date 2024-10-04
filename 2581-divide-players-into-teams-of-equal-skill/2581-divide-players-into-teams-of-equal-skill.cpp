class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        vector<int> v(skill.size()/2);
        for(int i = skill.size()/2; i < skill.size(); i++){
            v.push_back(skill[i]);
        }
        reverse(v.begin(), v.end());
        
        vector<pair<int, int>> vp;
        for(int i = 0; i < skill.size()/2; i++){
            vp.push_back(make_pair(skill[i], v[i]));
        }
        
        vector<int> vs;
        for(auto i : vp){
            vs.push_back(i.first + i.second);
        }
        
        for(int i = 0; i < vs.size() - 1; i++){
            if(vs[i] != vs[i + 1]) return -1;  
        }
        
        long long ans = 0;
        for(auto i : vp){
            ans += (long long)i.first * i.second;
        }
        
        return ans;
    }
};
