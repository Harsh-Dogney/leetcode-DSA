class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
    long long sum=0;
    priority_queue<int>pq(begin(nums),end(nums));
    while(k--){
        int max_val = pq.top();
            pq.pop();
            
            sum += max_val;
            int reduced_val = (max_val + 2) / 3;  // Equivalent to ceil(max / 3.0) for positive integers
            
            pq.push(reduced_val);
    }  
    return sum;
    }
};