//User function Template for C++
// Helper class Solution to implement 
// insert() and findFrequency()
class Solution{
    public:
    // Function to insert element into the queue
    map<int,int>mp;
    void insert(queue<int> &q, int k){
        q.push(k);
        mp[q.back()]++;
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        map<int,int>::iterator it=mp.find(k);
        if(it!=mp.end()){
            return (*it).second;
        }
        else
        return -1;
    }
    
};
