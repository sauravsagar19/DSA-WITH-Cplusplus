#include<iostream>
using namespace std;
bool foundEle(int arr[], int n,int k){
    int i=0;
    if(n==0){ // if size==0 
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    return foundEle(arr+1,n-1,k);
}
int main(){
int arr[14]={1,2,3,4,5,98,56,43,12,987,45,32,8876,456};
int n=14;
int k;
cin>>k;
if(foundEle(arr,n,k)){
    cout<<"Found !"<<endl;

}
else{
    cout<<"Could Not find !"<<endl;
}
return 0;
}