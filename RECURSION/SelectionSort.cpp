#include<iostream>
#include<algorithm>
using namespace std;
// selection sort means: 
// just select the min and swap it to correct position

// Normal 
void SelectionSort(int * arr, int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
//Via Recursion
void RecursiveSelection(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    SelectionSort(arr,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[11]={1,64,72,5,98,12,6,5,3,32,987};
int n=11;
SelectionSort(arr,n);
// RecursiveSelection(arr, n);

return 0;
}