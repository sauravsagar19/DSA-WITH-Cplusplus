#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
int kadane(int arr[],int n){
    int maxSum=INT_MIN;
    int currentSum=0;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        
    maxSum=max(maxSum,currentSum);
    }
    return maxSum;
}
int main(){
int arr[7]={4,-4,6,-6,10,-11,12};
// kadane(arr,7);
int WrapSum;
int nonWrapSum;
nonWrapSum=kadane(arr,7);
int totalsum=0;
for(int i=0;i<7;i++){
    totalsum+=arr[i];
    arr[i]=-arr[i];            // we reversed the sign of the each element of the array as discussed in the theory
}
nonWrapSum=totalsum+kadane(arr,7);        // here arr is reversed in sign
cout<<max(WrapSum,nonWrapSum);
return 0;
}