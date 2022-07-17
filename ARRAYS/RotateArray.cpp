#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[6]={1,2,5,6,7,8};

vector<int>v1;
int d=2;
int n=6;
for(int i=n-d-2;i<n;i++){
    v1.push_back(arr[i]);
}

for(int i=0;i<d;i++){
    v1.push_back(arr[i]);
}
for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<" ";
}
return 0;

}