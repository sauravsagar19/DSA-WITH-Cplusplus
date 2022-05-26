#include<iostream>
using namespace std;
int FirstOccurance(int arr[],int n,int i,int key){
   if(i==n){
       return -1;  // nahi mila;
   }
   if(arr[i]==key){
       return i;
   }
   return FirstOccurance(arr,n,i+1,key); 
   
}
int LastOccurance(int arr[],int n,int i,int key){
    if(i==n){
       return -1;  // nahi mila;
   }
   
   int restArray=LastOccurance(arr,n,i+1,key);
   if(restArray!=-1){
       return restArray; // that means we have found the element
   }
   if(arr[i]==key){
       return i;
   }
   else{
       return -1;
   }
}
int main(){
int arr[7]={1,3,5,9,3,6,4};
int n=7;
cout<<FirstOccurance(arr,7,0,9)<<endl;
cout<<LastOccurance(arr,n,0,3)<<endl;
return 0;
}