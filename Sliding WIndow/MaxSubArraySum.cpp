#include<iostream>
using namespace std;
int MaxSubArraySum(int arr[],int n, int k, int x){
    int sum=0;
    int ans=0;
    // For the fixed Window

    for ( int i=0;i<k;i++){
        sum+=arr[i];
    }
    if(sum<x){
        ans=sum;
    }
    // For the rest of the array
    
    
    for(int i=k;i<n;i++){
        sum-=arr[i-k];
        sum+=arr[i];
        if(sum<x){
            ans=max(ans,sum);
        }
    }
    return ans;
    
}
int main(){
int arr[]={7,5,4,6,8,9};
int k=3;
int x=20;
int n=6;
cout<<MaxSubArraySum(arr,6,3,20);
return 0;
}