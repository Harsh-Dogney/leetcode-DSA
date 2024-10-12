class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    
    priority_queue<int , vector<int>,greater<int>> pq;

    for(vector<int>& intervals : intervals){
        int start = intervals[0];
        int end = intervals[1];

        if(!pq.empty() &&start > pq.top()){
            pq.pop();
        }

        pq.push(end);


        
    }


    return pq.size();
    }
};