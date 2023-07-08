class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        map<int,int>mp;
        
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        
        vector<int>ans;
        
        for(int i=0; i<nums.size(); i++){
            if(mp[nums[i]]==1){ans.push_back(nums[i]);}
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};
