// Unordered set is based on Hashing technique
#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
unordered_set<int>s;
s.insert(5);
s.insert(50);
s.insert(23);
s.insert(24);
s.insert(23);
s.insert(87);
for(auto it=s.begin();it!=s.end();it++){
    cout<<*it<<" ";        // *it because it is a pointer
}cout<<endl; // 
cout<<s.size()<<endl;

if(s.find(50)==s.end()){ // seacrch iterator in the set. Returns iterator if the element found in the set. else returns iterator pointing to the set.end();
    cout<<"could not find! "<<endl;
}else{
    cout<<"Found!"<<endl;
}

// erase
s.erase(23);
// s.count() return the element if found
cout<<s.size()<<endl;
cout<<s.count(100)<<endl;  // return true if found, else false

// clear() // clear the set
s.clear();
cout<<"After s.clear(), The size is: "<<s.size();
return 0;
}