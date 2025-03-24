class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings){
        sort(meetings.begin(), meetings.end());

        long long totalMeetingDays = 0;
        int start = meetings[0][0];
        int end = meetings[0][1];

        for (int i = 1; i < meetings.size(); i++) {
            if (meetings[i][0] <= end) {

                end = max(end, meetings[i][1]);
            } else {

                totalMeetingDays += (end - start + 1);
                start = meetings[i][0];
                end = meetings[i][1];
            }
        }

        totalMeetingDays += (end - start + 1);


        return days - totalMeetingDays;
    }
};
static const int speedup=[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();