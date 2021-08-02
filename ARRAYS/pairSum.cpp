#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;

// random pair sum to k

// bool pairsum(int arr[],int n,int k){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(i==k && arr[i]+arr[j]==k){                  // But timeComplexity is O(n^2)
//                 return 0 ;
//             }
//             else if(arr[i]+arr[j]==k){
//                 cout<<i<<"  "<<j<<endl;
//                 return true;
//             }
            
//         }
//     }
//     return false;
// }

// Contiguous pair sum

// bool pairsum(int arr[],int n,int k){
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
            
//             if(arr[i]+arr[j]==k){                                  
//                 cout<<i<<"  "<<j<<endl;                               // But timeComplexity is O(n^2)
//                 return true;
//             }
            
//         }
//     }
//     return false;
// }

// since above Program have very high tc, we'll try to reduce it, by optimising our code 
bool pairsum(int arr[],int n, int k){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<"  "<<high<<endl;
            return true;                             // TC:  O(n) 
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}

int main(){
// int arr[5]={8,7,5,2,1};
// cout<<pairsum(arr,5,12); 
int arr[5]={1,2,3,4,5};
cout<<pairsum(arr,5,9);
return 0;
}