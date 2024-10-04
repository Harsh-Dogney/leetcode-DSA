class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(), skill.end());
        
        int n = skill.size();
        long long ans = 0;
        int expectedSum = skill[0] + skill[n - 1];
        
        for (int i = 0; i < n / 2; i++) {
            int sum = skill[i] + skill[n - 1 - i];
            if (sum != expectedSum) return -1;
            ans += (long long)skill[i] * skill[n - 1 - i];
        }
        
        return ans;
    }
};
