#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// sort(arr,arr+n);
// cout<<endl;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

int c0=0,c1=0,c2=0; 
for(int i=0;i<n;i++){
    if(arr[i]==0){
        c0++;
    }
    else if(arr[i]==1){
        c1++;
    }
    else{
        c2++;
    }
}
// cout<<c0<<" "<<c1<<" "<<c2<<" "; 
int i;
for(i=0;i<c0;i++){
    arr[i]=0;
}
for(i=c0;i<c0+c1;i++){
    arr[i]=1;
}
while(c2--){
    arr[i++]=2;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}