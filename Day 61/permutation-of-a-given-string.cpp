class Solution
{
	public:
	    void fun(int index,vector<string>&ans,string s)
        {
            if(index==s.length())
            {
                for(int i=0;i<ans.size();i++)
            {
                if(ans[i]==s) return;
            }
            ans.push_back(s);
            return;
            }
            for(int i=index;i<s.length();i++)
            {
                swap(s[index],s[i]);
                fun(index+1,ans,s);
                swap(s[index],s[i]);
            }
        }
		vector<string>find_permutation(string S)
		{
		    vector<string>ans;
            fun(0,ans,S);
            sort(ans.begin(),ans.end());
            return ans;
		}
};
