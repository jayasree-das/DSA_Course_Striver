/*T.C:- O(n^2) for the worst and average cases
T.C:- O(n) for the best cases when the array is already sorted
S.C:- O(1)*/
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                didswap=1;//if swapping occurs that is the array is unsorted
            }
        }
        /*if in the first iteration only we see that there was no swapping it means the array is already sorted so we break out from the loop*/
        if(didswap==0){
            break;
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