#include<bits/stdc++.h>
using namespace std;

int main(){
    int largest,smallest;
    smallest=INT_MAX;
int arr[9]={100,206,3,4,5,600,7,8,9}; 
    largest=arr[0];
    
for(int i=0;i<9;i++){
    if(arr[i]>largest){
        largest=arr[i]; 
        // smallest=arr[i];
}    
}
smallest=arr[0]; 
for(int i=0;i<9;i++){
    if(arr[i]<smallest){
        smallest=arr[i]; 
        // smallest=arr[i];
}   
} 
cout<<"Largest= "<<largest<<endl;
cout<<"smallest= "<<smallest<<endl;
cout<<"Product: "<<smallest*largest<<endl;

return 0;
}  