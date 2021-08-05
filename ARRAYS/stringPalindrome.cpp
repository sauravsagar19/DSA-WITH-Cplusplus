#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
int main(){
int n;
cin>>n;
char arr[n+1];
cin>>arr;
// bool check=1;
// for(int i=0;i<n;i++){
//     if(arr[i]!=arr[n-1-i]){
//         check=0;
//         break;
//     }
  
// }
// if(check==true){
//     cout<<"Word is palindrome"<<endl;
// }
// else{
//     cout<<"word is not palndrome "<<endl;
// }
bool check =false;

for(int i=0;i<n;i++){
    if(arr[i]==arr[n-1-i]){
        check=true;
    }
    else{
        break;
    }
  
}
if(check){
    cout<<"Word is palindrome"<<endl;
}
else{
    cout<<"word is not palndrome "<<endl;
}
return 0;
}