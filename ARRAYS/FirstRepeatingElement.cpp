#include<iostream>
using namespace std;
int main(){
int n, val;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>val;
arr[i]=val;
}
int N=INT_MAX;   // 10 to the power 6
int idx[N];
for(int i=0;i<N;i++){
    idx[i]=-1;             // first of all we initialized idx with -1
}
int minidx=INT_MAX;
for(int i=0;i<n;i++){
    if(idx[arr[i]]!=-1){
        minidx=min(minidx,idx[arr[i]]);
    }
    else{
        idx[arr[i]]=i;
    }
}
    if(minidx==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<minidx+1<<endl;
    }


return 0;
}
/* 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : "<<endl;
    cin>>n;
    int arr[n];
    int q=INT_MIN;

    cout<<"Enter the elements of the array :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        q=max(q,arr[i]);
    }

    int index[q+1]={};

    for(int i=0;i<n;i++){
        index[arr[i]]++;
    }

    for(int i=0;i<n;i++){
        if(index[arr[i]] > 1){
            cout<<i+1<<endl;
            return 0;
        }
    }

    cout<<"No repeating elements"<<endl;
    return 0;
}
*/
