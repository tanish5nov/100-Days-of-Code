class Solution {
  public:
    unordered_map<int, pair<int, int>> mp;
    vector<int> diffTypes;
    
    unordered_map<long long, unordered_map<long long, long long>> dp;
    
    long long helper(int i, long long pos) {
        int n = diffTypes.size();
        if(i == n)
            return abs(pos);
            
        if(dp.find(i) != dp.end()) {
            if(dp[i].find(pos) != dp[i].end()) {
                return dp[i][pos];
            }
        }
        
        int type = diffTypes[i];
        long long st = mp[type].first, end = mp[type].second;
        
        // left to right
        long long res1 = abs(st - pos) + abs(end - st) + helper(i+1, end);
        // right to left
        long long res2 = abs(end - pos) + abs(end - st) + helper(i+1, st);
        
        return dp[i][pos] = min(res1, res2);
    }
    long long minTime(int n, vector<int> &locations, vector<int> &types) {
        mp.clear();
        diffTypes.clear();
        dp.clear();
        
        for(int i = 0; i < n; i++) {
            int loc = locations[i];
            int type = types[i];
            
            if(mp.find(type) == mp.end()) {
                mp[type] = {loc, loc};
                diffTypes.push_back(type);
            } else {
                int st = mp[type].first, end = mp[type].second;
                st = min(st, loc);
                end = max(end, loc);
                mp[type] = {st, end};
            }
        }
        
        sort(diffTypes.begin(), diffTypes.end());
        
        return helper(0, 0);
    }
};
