// array sum using recursion
#include<iostream>
using namespace std;
int ArraySum(int arr[], int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    int rest=ArraySum(arr+1,n-1);
    int sum=arr[0]+rest;
    return sum;
}
int main(){
int arr[4]={2,3,4,5};
int n=4;
cout<<ArraySum(arr,n);
return 0;
}