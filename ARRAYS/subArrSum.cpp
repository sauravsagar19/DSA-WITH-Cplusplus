#include<iostream>
using namespace std;

int main(){
int arr[4]={1,2,3};
int sum=0;
for(int i=0;i<3;i++){
    sum=0;
    for(int j=i;j<3;j++){
        sum+=arr[j];
        cout<<sum<<" ";
    }
    cout<<endl;
}
return 0;
}