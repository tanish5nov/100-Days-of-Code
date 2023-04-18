class Solution {
public:
    int findMinDifference(vector<string>& timepoints) {
        vector<int>ans;

        for(int i=0; i<timepoints.size(); i++){
            string current= timepoints[i];
            int min= stoi(current.substr(3,2));
            int hr= stoi(current.substr(0,2));
            int totalmin=(hr*60)+min;
            ans.push_back(totalmin);
        }

        sort(ans.begin(),ans.end());

        int mini=INT_MAX;
        int n=ans.size();

        for(int i=0; i<n-1; i++){
            int diff=ans[i+1]-ans[i];
            mini=min(mini,diff);
        }

        int lastdif= ans[0]+1440-ans[n-1];
        mini=min(mini,lastdif);
        return mini;
    }
};
