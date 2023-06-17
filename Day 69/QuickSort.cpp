#include<bits/stdc++.h>
using namespace std;

int partition(int *arr, int s, int e){
    int pivot=arr[s];

    int count=0;

    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            count++;
        }
    }

    int pivotindex= s+count;

    //place pivot at right position
    swap(arr[pivotindex],arr[s]);

    int i=s;
    int j=e;

    while(i<pivotindex && j>pivotindex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotindex;
}


void quicksort(int *arr, int s, int e){
    //base case
    if(s>=e){
        return;
    }

    //partition karenge
    int p= partition(arr,s,e);

    //left part
    quicksort(arr,s,p-1);

    //rightpart
    quicksort(arr,p+1,e);


}

int main(){
    int arr[5]={2,4,1,6,9};
    int s=0;
    int e=4;
    quicksort(arr,s,e);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}
