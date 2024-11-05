class Solution {
public:
    int minChanges(string s) {
    int n = s.size();
        int changes = 0;
        
        // Traverse in pairs
        for (int i = 0; i < n; i += 2) {
            // Check each pair (s[i], s[i+1])
            char first = s[i];
            char second = s[i + 1];
            
            // If the two characters in the pair are different, one change is needed
            if (first != second) {
                changes += 1;
            }
            // If they are the same, no change is needed to make this pair uniform
        }
        
        return changes;    
    }
};