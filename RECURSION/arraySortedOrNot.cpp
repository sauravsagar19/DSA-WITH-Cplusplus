#include<iostream>
using namespace std;
bool isSorted(int arr[],int n){
    if(n==1){
        return true;
    }
    int restarray=isSorted(arr+1,n-1);
    return arr[0]<arr[1] && isSorted(arr+1,n-1);
}
int main(){
int arr[6]={1,2,3,4,5,6};
int arr1[6]={12,200,31,42,5,63};
cout<<isSorted(arr,6)<<endl;
cout<<isSorted(arr1,6)<<endl;
return 0;
}