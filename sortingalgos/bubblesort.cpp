#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<< "After Bubble Sort : "<< '\n';
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    cout<< '\n';
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<< "The given array is: "<< '\n';
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< '\n';
    bubble_sort(arr,n);
    return 0;
}