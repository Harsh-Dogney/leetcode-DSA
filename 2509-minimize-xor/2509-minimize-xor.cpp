class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int countSetBitsNum2 = __builtin_popcount(num2);
        int result = 0;
        for (int i = 31; i >= 0; --i) {
            if (countSetBitsNum2 > 0 && (num1 & (1 << i))) {
                result |= (1 << i);
                countSetBitsNum2--;
            }
        }
        for (int i = 0; i < 32; ++i) {
            if (countSetBitsNum2 > 0 && !(result & (1 << i))) {
                result |= (1 << i);
                countSetBitsNum2--;
            }
        }
        return result;
    }
};