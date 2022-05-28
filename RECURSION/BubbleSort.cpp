#include<iostream>
#include<algorithm>
using namespace std;
void Sorted(int *arr, int n){
    // base case
    if(n==0 || n==1){
        return;     // already sorted
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
        }
    }
    // 1 case solve ho gaya, baki recursion solve kar lega
    Sorted(arr,n-1);
}
int main(){
int arr[5]={10,88,12,54,76};
int n=5;
Sorted(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}