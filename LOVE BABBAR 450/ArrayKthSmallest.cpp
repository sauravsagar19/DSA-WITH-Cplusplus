#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<vector>
using namespace std;
int main(){
vector<int>v1;
v1.push_back(7);
v1.push_back(10 );
v1.push_back(4);
v1.push_back(20);
v1.push_back(15);
// v1.push_back(7);
int n,k;
cout<<"Enter K  and n"<<endl;
cin>>k>>n;
sort(v1.begin(),v1.end());
for(int i=0;i<n;i++){
    cin>>v1[i];
}
for(int i=0;i<n;i++){
    cout<<v1[i]<<" ";
}
cout<<v1[k-1]<<" "<<v1[n-k]<<endl;
// sort(arr)
return 0;
}