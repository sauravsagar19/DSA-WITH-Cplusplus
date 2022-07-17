#include<iostream>
using namespace std;
int MinSubArraySize(int arr[], int n, int x){
   int minLength=n+1;
   int sum=0,start=0,end=0;
   while(end<n){
       while(sum<x && end<n){
           sum+=arr[end++];
           
       }
       while(sum>=x && start<n){
           if(end-start<minLength){
               minLength=end-start;
           }
           sum-=arr[start++];
       }
   }
   return minLength;
}
int main(){
int arr[]={1,4,45,6,10,9};
int x=51;
int n=6;
cout<<MinSubArraySize(arr,n,x);
return 0;
}