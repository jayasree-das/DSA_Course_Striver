/*T.C:- O(n^2) for the worst and average cases
T.C:- O(n) for the best case when the array is already sorted so only the outer loop will run and the inner loop will run 0 times
S.C:-O(1)*/

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    cout<< "After insertion sort: "<<'\n';
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    cout<<'\n';
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<< "The given array is: "<< '\n';
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<'\n';
    insertion_sort(arr,n);
    return 0;
}