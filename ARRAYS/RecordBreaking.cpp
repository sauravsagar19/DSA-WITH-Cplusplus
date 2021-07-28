// Google KickStart
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    // int arr[n];
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    arr[n]=-1; 
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    int count=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            count++;
        }
        mx=max(mx,arr[i]);
    }
    cout<<"Answer: "<<count<<endl;
return 0;
}
