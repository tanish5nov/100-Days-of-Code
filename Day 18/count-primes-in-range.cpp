// User function Template for C++

class Solution {
  public:
    int countPrimes(int L, int R) {
         vector<bool> prime(R+1,true);

        int count = 0;

       

        prime[0] = prime[1] = false;

        

        for(int i = 2; i <= sqrt(R); i++)

        {

             if(prime[i]){

                 

            for(int j = 2*i; j <= R; j = j +i)

                    prime[j] = false;

             }   

        }

        

        for(int i = L; i <= R; i++){

            if(prime[i])

                count++;

        }

        return count;
    }
};
