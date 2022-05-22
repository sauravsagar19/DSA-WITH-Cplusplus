
#include<bits/stdc++.h>
using namespace std;
int main(){
string s="sausruarv";
int n=s.length();
char arr[n+1];
strcpy(arr,s.c_str());
unordered_map<char,int>umap;
for(int i=0;i<n;i++){
    int key=arr[i];
    umap[key]++;
}
for(auto it=umap.begin();it!=umap.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
return 0;
}