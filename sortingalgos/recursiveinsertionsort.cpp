#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[],int ind,int n){
    if(ind==n) return;

    int j=ind;
    while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
    insertionsort(arr,ind+1,n);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<< "The given array is: " <<"\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr,0,n);
    cout<<"The sorted array is: "<<"\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}