class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());
        // for(auto i: trainers){
        //     tra.insert(i);
        // }
        int ans=0;
        int j=0;
        for(int i=0; i<players.size(); i++){
            while(j<trainers.size() && trainers[j]<players[i]){
                j++;
            }
            if(j<trainers.size() && trainers[j]>=players[i]){
                ans++;
                j++;
            }
        }
        return ans;
    }
};
