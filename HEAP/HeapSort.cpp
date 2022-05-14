#include<iostream>
using namespace std;
void Heapify(int arr[], int n, int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<=n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<=n && arr[largest]<arr[right]){
        largest=right;
    }

    if(largest!=i)   // That means the largest is updated... so we need to correct its position
    {
        swap(arr[largest],arr[i]);
        Heapify(arr,n,largest);
    }
}
void heapSort(int arr[], int n){
    int size=n;
    while(size>1){
        swap(arr[size],arr[1]);
        size--;
        Heapify(arr,size,1);
    }
    
}

int main(){
int arr[6]={-1,54,53,55,52,50};
int n =5;
for ( int i=n/2;i>0;i--){
    Heapify(arr,n,i);
}
for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;

cout<<"Heap sorted...."<<endl;

heapSort(arr,n);
for(int i=1;i<=n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;
return 0;
}