#include <bits/stdc++.h> 

void revQ(queue<int>&q, int k){
    //base case
    if(k==0){
        return;
    }

    int num = q.front();
    q.pop();

    revQ(q,--k);

    q.push(num);
}

queue<int> reverseElements(queue<int> q, int k)
{   
    revQ(q,k);
    int n=q.size();
    for(int i=0; i<n-k; i++){
        q.push(q.front());
        q.pop();
    }
    return q;
}
