#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
            // key  // value
unordered_map<string,int>umap;
umap["saurav"]=22;
umap["deva"]=23;
umap["himanshu"]=32;
umap["medo"]=62;
umap["raunil"]=52;
umap["shreya"]=42;
// for(auto i:umap){
//     cout<<i.first<<" "<<i.second<<endl;
// }
for(auto it=umap.begin();it!=umap.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}

cout<<"-------------------------------------------------------------"<<endl;
// find()
string key="saurav";
if(umap.find(key)!=umap.end()){
    cout<<"Found!"<<endl;
}else{
    cout<<"Not Found!"<<endl;
}

cout<<"-------------------------------------------------------------"<<endl;
// lets get the key and value using umap.find();
if(umap.find(key)!=umap.end()){
    auto temp=umap.find(key);
    cout<<temp->first<<" "<<temp->second<<endl;
}
else{
    cout<<"not found"<<endl;
}

// lets insert
cout<<"-------------------------------------------------------------"<<endl;
umap.insert(make_pair("helloWorld",78));
for(auto it=umap.begin();it!=umap.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}

cout<<"-------------------------------------------------------------"<<endl;
// Erase
umap.erase("helloWorld");
for(auto it=umap.begin();it!=umap.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
cout<<"-------------------------------------------------------------"<<endl;
// lets count the number of each key
int arr[] = {7, 1, 0, 3, 5, 0, 1, 3, 2, 5, 7, 3, 8, 9, 9};
unordered_map<int,int>umap2;
for(int i=0;i<15;i++){
    int key=arr[i];
    umap2[key]++;
}
for(auto it=umap2.begin();it!=umap2.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
cout<<"-------------------------------------------------------------"<<endl;


return 0;
}