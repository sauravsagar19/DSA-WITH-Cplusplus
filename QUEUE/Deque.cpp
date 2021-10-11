#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<deque>
using namespace std;
int main(){
deque<int>dq;
dq.push_back(1);
dq.push_front(10);
dq.push_back(20);
dq.push_front(100);
cout<<dq.size();
cout<<endl;
for(int i=0;i<4;i++){
    cout<<dq[i]<<" ";
}
return 0;
}