//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizes)
    {
        stack<int>safe;
        int mid=(sizes+1)/2;
        
        if(sizes%2==0){mid+=1;}
        
        while(mid--){
            safe.push(s.top());
            s.pop();
        }
        
        safe.pop();
        
        while(!safe.empty()){
            s.push(safe.top());
            safe.pop();
        } 
    }
};
