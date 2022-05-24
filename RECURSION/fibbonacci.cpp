#include<iostream>
using namespace std;
int fibbonacci(int n){
    if(n<=1){
    return n;
    }
    return fibbonacci(n-1)+fibbonacci(n-2);  

}
int main(){
cout<<fibbonacci(5);
return 0;
}