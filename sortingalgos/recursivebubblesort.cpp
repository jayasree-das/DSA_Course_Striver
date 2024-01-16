#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n){
    int swap=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
            swap=1;
        }
    }
    if(swap==0) return;
    bubblesort(arr,n-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"The given array is: "<< "\n";
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    cout<<"\n";
    bubblesort(arr,n);
    cout<<"The array after sorting: "<< '\n';
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}