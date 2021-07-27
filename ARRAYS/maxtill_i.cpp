#include<iostream>
using namespace std;

int main(){
int size,val;
cin>>size;
int arr[size];
cout<<"Enter value: ";
for(int i=0;i<size;i++){
    cin>>val;
    arr[i]=val;
}
int mx=INT_MIN;
for(int i=0;i<size;i++){
    mx=max(mx,arr[i]);
}
cout<<mx<<endl;
return 0;
}