/*T.c:- O(n^2) for worst cases 
O(n * log n) for best and average cases
S.C:- O(1) but in worst case if we consider recursive stack space then it is O(n)*/
#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i=low, j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

void quicksort(int arr[],int low,int high){
    if(low < high){
        int pIndex = partition(arr,low,high);

        quicksort(arr,low,pIndex-1);
        quicksort(arr,pIndex+1,high);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<< "The given array is: "<<"\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    quicksort(arr,0,n);
    cout<<"The sorted array is: " <<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i] << " ";
    }
    return 0;
}