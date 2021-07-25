#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int k){
    int start=0;
    int end=n;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==k){
            return mid;
        }

        else if(arr[mid]>k){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
        
}
        return -1;
}
int main(){

    int n, value;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value :";
        cin >> value;
        arr[i] = value;
    }
    int key;
    cout << "searching value:  ";
    cin >> key;
    cout<<BinarySearch(arr,n,key);
return 0;
}