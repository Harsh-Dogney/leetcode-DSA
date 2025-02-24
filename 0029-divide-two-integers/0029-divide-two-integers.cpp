class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle the edge case where dividend is INT_MIN and divisor is -1 (overflow case)
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;

        // Convert to long long to handle absolute value safely
        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);
        long long ans = 0;

        // Determine the sign of the result
        int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;

        // Perform division using bit manipulation
        while (n >= d) {
            long long count = 0;
            while (n >= (d << (count + 1))) 
                count++;
            n -= d << count;
            ans += 1LL << count;
        }

        return sign * ans;
    }
};
