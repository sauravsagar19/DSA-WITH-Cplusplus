#include<iostream>
using namespace std;
// Normal ways
// (watch for clearification)  https://www.youtube.com/watch?v=9ufqiy4VlLI
void InsertionSort(int arr[], int n){
    for(int i=1;i<n;i++){ // first one is alredy sorted(assumed)
        int curr=arr[i];
        int j=i-1;
        while(arr[j]>curr && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
}

// Recursive ways (https://www.youtube.com/watch?v=uwV80JaZrPs)
void RecursiveInertion(int arr[], int n){
    if(n<=1){
        return;
    }
    RecursiveInertion(arr,n-1);
    int key=arr[n-1];
    int j=n-2;
    while(j>=0 && arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}
int main(){
int arr[5]={10,88,12,54,76};
int n=5;
// InsertionSort(arr,n);
RecursiveInertion(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}