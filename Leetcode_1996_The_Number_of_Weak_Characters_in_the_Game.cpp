class Solution {
public:
    // Comparator operator is use for giving condition to sort function
    static bool comp(vector<int>&a, vector<int>&b){
        if(a[0]==b[0]){
            //if 1st element is same then sort desending order for second element
            return a[1]>b[1];
        }
        // Sort the given array by 1st value in incerasing order
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        /*
            Sort the given array by 1st value in incerasing order
            If first value is same sort by second value in decreasing order
            iterate properties vector from last to first
        */
        sort(properties.begin(), properties.end(), comp);
        int b = INT_MIN;
        int ans=0;
        // iterate properties vector from last to first
        for(int i=properties.size()-1; i>=0; i--){
            if(b<=properties[i][1]){
                b=properties[i][1];
            }
            else{
                    ans++;
            }
        }
        return ans;
    }
};
