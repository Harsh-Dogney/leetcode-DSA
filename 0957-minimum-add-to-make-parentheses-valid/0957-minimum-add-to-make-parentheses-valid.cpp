class Solution {
public:
    int minAddToMakeValid(string s) {
        int openBrackets = 0;
        int toAdd = 0;       

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                openBrackets++;  
            } else if(s[i] == ')') {
                if(openBrackets > 0) {
                    openBrackets--;  
                } else {
                    toAdd++;  
                }
            }
        }

       
        return toAdd + openBrackets;
    }
};
