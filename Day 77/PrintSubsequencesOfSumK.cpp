#include<bits/stdc++.h>
using namespace std;

void printSub(int index, int n, int arr[], int target, int sum, vector<int>ans){
    //base case
    if(index>=n){
        sum=accumulate(ans.begin(),ans.end(),0);
        if(target==sum){
            for( auto it : ans){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }

    //take
    ans.push_back(arr[index]);
    printSub(index+1, n, arr, target, sum, ans);

    //not take
    ans.pop_back();
    printSub(index+1, n, arr, target, sum, ans);
}

int main(){
    int arr[3]={1,2,1};
    int target =4;
    vector<int>ans;
    printSub(0,3,arr,target,0,ans);
}
