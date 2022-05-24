#include<iostream>
using namespace std;
int addTilln(int n){
    if(n==0){
        return 0;
    }
    return n+addTilln(n-1);
}
int main(){
    int n;
    cin>>n;
cout<<addTilln(n);
return 0;
}