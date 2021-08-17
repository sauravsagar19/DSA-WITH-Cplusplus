//How many numbers between 1 and 100 are divisible by 5 or 7

#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
using namespace std;
void DivisibleBy7(int n,int a, int b){
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);     // numbers divisible by both 5 and 7
    cout<<c1<<endl;
    cout<<c2<<endl;
    cout<<c3<<endl;
    cout<<c1+c2-c3;
}
int main(){
DivisibleBy7(40,5,7);
return 0;
}