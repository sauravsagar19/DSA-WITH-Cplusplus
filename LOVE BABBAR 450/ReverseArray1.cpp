// Reverse an array
/*
1) Initialize start and end indexes as start = 0, end = n-1 
2) In a loop, swap arr[start] with arr[end] and change start and end as follows : 
start = start +1, end = end – 1
*/

// ITERATIVE WAY

// #include <iostream>
// using namespace std;
// void ReverseArray(int arr[], int start, int end)
// {
    
//     while(start<end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
// int main()
// {
//     // int arr[5]={1,2,3,4,5};
// int size,val;
//     cout<<"Enter size: ";
//     cin>>size;
//     int arr[size];
//     for(int i=0;i<size;i++){
//         cout<<"Enter Value: ";
//         cin>>val;
//         arr[i]=val;
//     }
//     ReverseArray(arr,0,size-1);
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<"  ";
//     }

// return 0;
// }

// RECURSIVE WAY

//1) Initialize start and end indexes as start = 0, end = n-1 
// 2) Swap arr[start] with arr[end] 
// 3) Recursively call reverse for rest of the array.

#include<iostream>
using namespace std;
void ReverseArray(int arr[],int start,int end){
    if(start>=end){
        return ;
    }
    else{
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        ReverseArray(arr,start+1,end-1); // Recursion
    }
}
int main(){
int size,val;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"Enter Value: ";    
        cin>>val;
        arr[i]=val;
    }
    ReverseArray(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
return 0;
}