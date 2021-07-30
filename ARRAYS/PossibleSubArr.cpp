#include<iostream>
using namespace std;
int main(){

int n, val;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>val;
arr[i]=val;
}
int max_sum=INT_MIN;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int sum=0;
        for(int k=i;k<=j;k++){           // Time Complexity: O(n^3) which is :(
            // cout<<arr[k]<<" ";
            sum+=arr[k];
        }
        // cout<<sum;    // if we want the sum of every subArrays
        
        // cout<<endl;
        max_sum=max(max_sum,sum);
    }
}
// cout<<sum;     // if we want the overall sum of the total subarrays
   cout<<max_sum;
    return 0;
}