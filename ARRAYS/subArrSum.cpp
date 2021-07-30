#include<iostream>
using namespace std;

int main(){
int arr[5]={1,-4,3,2,1};
int sum=0;
int max_sum= INT_MIN;
for(int i=0;i<5;i++){
    sum=0;
    for(int j=i;j<5;j++){          // Time complexity: O(n^2)
        sum+=arr[j];
        // cout<<sum<<" ";
        
    }
    max_sum=max(max_sum,sum);
    cout<<endl;
}
cout<<"Maximum Sum"<<max_sum;
return 0;
}