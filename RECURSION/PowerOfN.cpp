// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int power(int n, int p){
    if(p==0){
        
        return 1;
    }
    if(p==1){
        
        return n;
    }
    int prevPower=power(n,p-1);
    return n*prevPower;
    
}
int main(){
int n, p;
cin>>n>>p;
cout<<power( n, p);
return 0;
}