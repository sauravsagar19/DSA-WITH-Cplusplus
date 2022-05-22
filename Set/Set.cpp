#include<iostream>
#include<set>
using namespace std; 
int main(){
set<int>s;
s.insert(1);
s.insert(1); // only one 1 will be printed, as set does not allow duplication
s.insert(11);
s.insert(10);
s.insert(2);
s.insert(3);
for(auto i:s)
    cout<<i<<" ";
cout<<endl;

// // another way to print using auto
// for(auto i=s.begin();i!=s.end();i++){
//     cout<<*i<<" ";
// }cout<<endl;

// // print in Reverse
// for(auto i=s.rbegin();i!=s.rend();i++){
//     cout<<*i<<" ";
// }cout<<endl;
// // size of the set
// cout<<s.size()<<endl;

// UPPER BOUND && LOWER BOUND
cout<<*s.lower_bound(1)<<endl;
cout<<*s.lower_bound(0)<<endl;
cout<<*s.lower_bound(9)<<endl;
cout<<*s.upper_bound(10)<<endl;

// Custom Operator
set<int,greater<int>>s2;  // Greater first
s2.insert(10); 
s2.insert(10); 
s2.insert(20); 
s2.insert(30); 
s2.insert(40); 
s2.insert(50); 
s2.insert(60); 
for(auto i=s2.begin();i!=s2.end();i++){
    cout<<*i<<" ";
}cout<<endl;
s2.erase(10);      // Erased 10
for(auto i=s2.begin();i!=s2.end();i++){
    cout<<*i<<" ";
}cout<<endl;
return 0;
}