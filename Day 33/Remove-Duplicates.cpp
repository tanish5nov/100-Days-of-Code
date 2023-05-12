//User function template for C++

class Solution{
public:
    int remove_duplicate(int A[],int N){
        int idx = 1;
        for(int i=1; i<N; i++){
            if(A[i-1] != A[i] ){
                A[idx] = A[i];
                idx++;
            }
        }
        return idx;
    }
};
