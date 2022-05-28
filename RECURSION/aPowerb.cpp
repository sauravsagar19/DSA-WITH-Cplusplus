// i/p: a=2; b=3; 
// o/p 2^3 = 8;
#include<iostream>
int aPowerb(int a, int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    if(b%2==0){
        return aPowerb(a,b/2)*aPowerb(a,b/2);
    }else{
        return a*aPowerb(a,b/2)*aPowerb(a,b/2);
    }
}
using namespace std;
int main(){
int a,b;
cin>>a>>b;
cout<<aPowerb(a, b);
return 0;
}