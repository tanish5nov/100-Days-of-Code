// User function Template for C++

class Solution{
  public:
    int cutRod(int price[], int n) {
        int ans;

        vector<int> maxprice(n);

        maxprice[0] = price[0];

        for(int i=1; i<n; ++i){

            int maxi= INT_MIN;

            for(int cut=1; cut<=i; ++cut){

                maxprice[i] = max(price[i], maxprice[cut-1]+maxprice[i-cut]);

                maxi = max(maxi, maxprice[i]);

            }

            maxprice[i] = maxi;

        }

        ans = maxprice[n-1];

        return ans;
    }
};
