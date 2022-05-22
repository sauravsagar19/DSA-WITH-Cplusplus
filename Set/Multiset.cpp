//Part of ordered set only
#include<iostream>
#include<set>
using namespace std;
int main(){
multiset<int>Mset;
Mset.insert(1);
Mset.insert(1);
Mset.insert(1);
Mset.insert(1);
Mset.insert(2);
Mset.insert(2);
Mset.insert(2);
Mset.insert(3);
Mset.insert(5);
Mset.insert(7);
for(auto i=Mset.begin();i!=Mset.end();i++){
    cout<<*i<<" ";
}cout<<endl;
// in case of Erase, if we simply do Mset.erase(2);   It will delete every instanes of 2 . Lets see
Mset.erase(2);
for(auto i=Mset.begin();i!=Mset.end();i++){
    cout<<*i<<" ";
}cout<<endl;

// what if we wanna delete only one 1;
Mset.erase(Mset.find(1));
for(auto i=Mset.begin();i!=Mset.end();i++){
    cout<<*i<<" ";
}cout<<endl;

return 0;
}