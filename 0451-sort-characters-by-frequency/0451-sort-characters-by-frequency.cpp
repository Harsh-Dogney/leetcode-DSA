class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        
        // Step 1: Count frequency of each character
        for (char c : s) {
            mp[c]++;
        }

        // Step 2: Store characters in a vector of pairs (char, frequency)
        vector<pair<int, char>> freq;
        for (auto i : mp) {
            freq.push_back({i.second, i.first});  // Store frequency first for sorting
        }

        // Step 3: Sort by frequency in descending order
        sort(freq.rbegin(), freq.rend());

        // Step 4: Build the result string
        string ans = "";
        for (auto i : freq) {
            ans += string(i.first, i.second);  // Append character `i.second` `i.first` times
        }

        return ans;
    }
};
