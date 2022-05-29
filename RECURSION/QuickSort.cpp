#include<iostream>
using namespace std;
int partition(int arr[], int s, int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    // get the index of pivot
    int pivotIndex=s+cnt;
    // Place pivot at its right postion
    swap(arr[pivotIndex],arr[s]);
    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex ){
        while(arr[i]<=arr[pivotIndex]){ // checking each element with pivot
            i++;
        }
        while(arr[j]>arr[pivotIndex]){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){ 
            swap(arr[i++],arr[j--]);     // after swapping , we incremented i and decremented j
        }
    }
    return pivotIndex; // we returned the index
}
void QuickSort(int arr[],int s, int e){
    if(s>=e) return ;
    //partition;
    int p=partition(arr, s, e);

    // Partition karne ke baad, dono part ko QuickSort kar denge.
    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);
}
int main(){
int arr[10] = {2,4,1,6,9 ,9,9,9,9,9};
    int n = 10;
 QuickSort(arr, 0, n-1);

for(int i=0; i<n; i++) 
    {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}
