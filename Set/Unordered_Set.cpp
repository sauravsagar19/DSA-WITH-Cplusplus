#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
unordered_set<int>Uset;
Uset.insert(1);
Uset.insert(20);
Uset.insert(30);
Uset.insert(40);
Uset.insert(50);
Uset.insert(5);
Uset.insert(5);
for(auto i=Uset.begin();i!=Uset.end();i++){
    cout<<*i<<" ";
}cout<<endl;
Uset.erase(5);
for(auto i=Uset.begin();i!=Uset.end();i++){
    cout<<*i<<" ";
}
return 0;
}