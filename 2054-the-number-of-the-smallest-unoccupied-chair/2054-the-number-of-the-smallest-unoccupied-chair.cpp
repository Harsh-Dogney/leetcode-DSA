class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
   
    int n = times.size();
    vector<pair<int,pair<int,int>>>mv;
    for(int i =0;i<n; i++){
        pair<int,pair<int,int>> p = {times[i][0],{times[i][1],i}};
        mv.push_back(p);
    }
    sort(mv.begin(),mv.end());

    vector<int>chair(n,-1);
    for(int i=0;i<n;i++){
        int arival = mv[i].first;
        int departure= mv[i].second.first;
        int friendNumber = mv[i].second.second;

        for(int j=0;j<n;j++){
            if(chair[j]<=arival){
                chair[j]=departure;
                    if(friendNumber==targetFriend){
                        return j;
                    }
                break;
            }
        }
    }
    return 0;
    }
};