// Arrange the array alternatively
// i/p:int arr[]={ 1,2,3,4,5,6}
// o/p: 6,1,5,2,4,3

#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[6]={1,2,3,4,5,6};
vector<int>v;
int start=0;
int end=5;
for(int i=0;i<6;i++){
    if(start>end){
        break;
    }
    v.push_back(arr[end]);
    v.push_back(arr[start]);
    end--;
    start++;
}
for(auto i=v.begin();i!=v.end();i++){
    cout<<*i<<" ";
}
return 0;
}