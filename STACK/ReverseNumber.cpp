// using stack
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<stack>
#include<limits>
using namespace std;
int main(){
int n;
cin>>n;
string stt=to_string(n);
stack<char> s;
// Reverse(stt);
for(int i=0;i<stt.length();i++){
    // cout<<stt[i]<<" ";
    s.push(stt[i]);
}
while(!s.empty()){
    cout<<s.top();
    s.pop();
}
return 0;
}