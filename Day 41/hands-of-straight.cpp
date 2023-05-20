class Solution {
  public:
    bool isStraightHand(int N, int groupSize, vector<int> &hand) {
        if(N % groupSize != 0)
        {
            return false;
        }
    
        map<int,int>mp;
        int i;
        for(i=0;i<N;i++)
        {
            mp[hand[i]]++;
        }
        int count = N / groupSize;
        while(count--)
        {
            int a = groupSize;
            vector<int>v;
            for(auto & x : mp)
            {
                if(a == 0)
                {
                    break;
                }
                v.push_back(x.first);
                x.second--;
                if(x.second == 0)
                {
                    mp.erase(x.first);
                }
                a--;
            }
            if(v.size() != groupSize)
            {
                return false;
            }
            for(i=0;i<v.size()-1;i++)
            {
              if(v[i]+1 != v[i+1])
              {
                  return false;
              }
            }
    
        }
        return true;
    }
};
