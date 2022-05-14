#include<iostream>
using namespace std;
void Heapify(int arr[], int n, int i){
    int smallest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<n && arr[smallest]>arr[left]){
        smallest=left;
    }
    if(right<n && arr[smallest]>arr[right]){
        smallest=right;
    }

    if(smallest!=i)   // That means the largest is updated... so we need to correct its position
    {
        swap(arr[smallest],arr[i]);
        Heapify(arr,n,smallest);
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
return 0;
}