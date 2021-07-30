// here we will find the max_sum of the subArray

#include<iostream>
using namespace std;
int main(){
    int currSum=0;
    int MaxSum=INT_MIN;
    int n, val;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
    cin>>val;
    arr[i]=val;
    }
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        MaxSum=max(MaxSum,currSum);
    }
    cout<<"Maximum sum: "<<MaxSum;
    return 0;
}