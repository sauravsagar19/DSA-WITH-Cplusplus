// Longest Substring without repeating
#include<iostream>
#include<algorithm>
#include<string>
#include<cmath>
#include<limits>
#include<vector>
#include<string>
using namespace std;
int main(){
vector<int>indeces(256,-1);
int start=-1;
int maxLen=0;
string s;
cin>>s;
for(int i=0;i<s.length();i++){
    if(indeces[s[i]]>start){
        start=indeces[s[i]];
    }
    indeces[s[i]]=i;

maxLen=max(maxLen,i-start);
}
cout<<maxLen;
return 0;
}