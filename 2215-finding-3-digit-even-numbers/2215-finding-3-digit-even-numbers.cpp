class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> vc(10, 0);
        for (auto num : digits) {
            vc[num]++;
        }
        vector<int> ans;
        int i = 100;
        while (i < 999) {
            int num = i;
            vector<int> temp = vc;
            bool found = true;
            while (num > 0) {
                int digit = num % 10;
                if (temp[digit] == 0) {
                    found = false;
                    break;
                } else {
                    temp[digit]--;
                }
                num /= 10;
            }
            if (found) {
                ans.push_back(i);
            }
            i += 2;
        }
        return ans;
    }
};